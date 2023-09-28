#include <Arduino.h>
#include "PMBus.h"
#include "PMBusState.h"
#include "Utils.h"

#pragma region Constructors
PMBus::PMBus(const int alertPin, const uint8_t address)
{
  this->address = address;
  this->alertPin = alertPin;
  this->state = new PMBusState();
  this->receiveBuffer = new uint8_t[16];
}

PMBus::~PMBus()
{
  delete this->state;
  delete[] this->receiveBuffer;
}

void PMBus::Init(PMBusState *state)
{
  this->state = state;
  Wire.begin();
}
#pragma endregion

#pragma region Public Methods
void PMBus::SetSequence(uint8_t rail, uint8_t start, uint8_t stop)
{
  uint8_t byte = ((stop & 0b11) << 2) | (start & 0b11);
  Send(PM_COMMAND::SEQUENCE_ORDER, rail, byte);
  this->state->Rails[rail].Sequence.Set(start, stop);
}

void PMBus::SetEnablePins(PM_ENABLE_CONFIG config)
{
  SendGlobal(PM_COMMAND::PIN_CONFIG_00, config);
  state->EnableConfig = config;
}

void PMBus::SetPhase(uint8_t rail, RailPhase phase)
{
  Send(PM_COMMAND::FREQUENCY_PHASE, rail, phase.GetByte());
  state->Rails[rail].Phase = phase;
}

void PMBus::SetWriteProtection(PM_WRITE_PROTECT wp)
{
  SendGlobal(PM_COMMAND::WRITE_PROTECT, (uint8_t)wp);
  this->state->WriteProtect = wp;
}

void PMBus::SaveCurrentSettings()
{
  Command(PM_COMMAND::STORE_DEFAULT_ALL);
}

void PMBus::WriteAllSettings(bool saveSettings = false)
{
  this->SetWriteProtection(PM_WRITE_PROTECT::ALL_ENABLE);

  this->SendSequences();
  this->SendAllPhases();
  this->SendEnablePins();
  this->SendAllMaxCurrent();
  this->SendOnOffDelay();
  if (saveSettings)
  {
    this->SaveCurrentSettings();
    delay(75);
  }

  this->SetWriteProtection(wp);
}

void PMBus::SetOnOffDelay(uint8_t rail, uint8_t onDelay, uint8_t offDelay)
{
  uint8_t delay = ((onDelay & 0b111) << 3) | (offDelay & 0b111);
  Send(PM_COMMAND::TON_TOFF_DELAY, rail, delay);
  this->state->Rails[rail].Delay.Set(onDelay, offDelay);
}

void PMBus::SetAllOnOffDelays(uint8_t onDelay, uint8_t offDelay)
{
  uint8_t byte = ((onDelay & 0b111) << 3) | (offDelay & 0b111);
  Send(PM_COMMAND::TON_TOFF_DELAY, 0xFF, byte);
  for (size_t i = 0; i < RAIL_COUNT; i++)
  {
    this->state->Rails[i].Delay.Set(onDelay, offDelay);
  }
}

void PMBus::SetMaxCurrent(uint8_t rail, uint8_t max)
{
  Send(PM_COMMAND::IOUT_MAX, rail, max);

  this->state->Rails[rail].MaxIOut = max;
}

void PMBus::ReadStatus(uint8_t rail)
{
  ReceiveBytes(PM_COMMAND::STATUS_WORD, rail, this->receiveBuffer, 2);

  uint16_t word = BuildWord(this->receiveBuffer[1], this->receiveBuffer[0]);
  this->state->PwrGood = bitRead(word, PM_STATUS_MASK::PWR_GOOD) ? false : true;
  this->state->CmdFault = bitRead(word, PM_STATUS_MASK::CML) ? true : false;
  this->state->MfrFault = bitRead(word, PM_STATUS_MASK::MFR) ? true : false;
  this->state->OverTemp = bitRead(word, PM_STATUS_MASK::OVERTEMP) ? true : false;
  this->state->Rails[rail].OverCurr = bitRead(word, PM_STATUS_MASK::IOUT_OC) ? true : false;
  this->state->Rails[rail].OverVolt = bitRead(word, PM_STATUS_MASK::VOUT_OV) ? true : false;
}

void PMBus::SoftReset()
{
  Command(PM_COMMAND::SOFT_RESET);
}

void PMBus::EnableAllRails()
{
  Send(PM_COMMAND::OPERATION, 0xFF, PM_RAIL_OPERATION::ENABLE_RAIL);
  for (size_t i = 0; i < RAIL_COUNT; i++)
  {
    this->state->Rails[i].Enable = PM_RAIL_STATE::ENABLE;
  }
}

void PMBus::DisableAllRails()
{
  Send(PM_COMMAND::OPERATION, 0xFF, 0x10 << 4);
  for (size_t i = 0; i < RAIL_COUNT; i++)
  {
    this->state->Rails[i].Enable = PM_RAIL_STATE::DISABLE;
  }
}

void PMBus::SetRail(uint8_t rail, PM_RAIL_STATE en)
{
  Send(PM_COMMAND::OPERATION, rail, en);
  this->state->Rails[rail].Enable = en;
}

void PMBus::ManualSequence(PM_RAIL_STATE en)
{
  for (size_t i = 0; i < RAIL_COUNT; i++)
  {
    for (size_t r = 0; r < RAIL_COUNT; r++)
    {
      if (this->state->Rails[r].Sequence.Start == i)
      {
        this->SetRail(i, en);
        delay(
          en == PM_RAIL_STATE::ENABLE
            ? this->state->Rails[r].Delay.ON
            : this->state->Rails[r].Delay.OFF
        );
      }
    }
  }
}
#pragma endregion

#pragma region Private Methods

#pragma region Send Settings Methods
void PMBus::SendSequences()
{
  for (size_t i = 0; i < RAIL_COUNT; i++)
  {
    Send(PM_COMMAND::SEQUENCE_ORDER, i, this->state->Rails[i].Sequence.GetByte());
  }
}

void PMBus::SendAllPhases()
{
  for (size_t i = 0; i < RAIL_COUNT; i++)
  {
    Send(PM_COMMAND::FREQUENCY_PHASE, i, this->state->Rails[i].Phase.GetByte());
  }
}

void PMBus::SendEnablePins()
{
  SendGlobal(PM_COMMAND::PIN_CONFIG_00, this->state->EnableConfig);
}

void PMBus::SendAllMaxCurrent()
{
  for (size_t i = 0; i < RAIL_COUNT; i++)
  {
    Send(PM_COMMAND::IOUT_MAX, i, this->state->Rails[i].MaxIOut);
  }
}

void PMBus::SendOnOffDelay()
{
  for (size_t i = 0; i < RAIL_COUNT; i++)
  {
    Send(PM_COMMAND::TON_TOFF_DELAY, i, this->state->Rails[i].Delay.GetByte());
  }
}

#pragma endregion

uint8_t PMBus::Receive(PM_COMMAND cmd, uint8_t rail)
{
  Wire.beginTransmission(this->address);
  Wire.write(PM_COMMAND::PAGE);
  Wire.write(rail);
  Wire.endTransmission();

  //! THIS MAY NOT WORK
  Wire.beginTransmission(this->address);
  Wire.write(cmd);
  Wire.endTransmission();

  Wire.requestFrom(this->address, (uint8_t)1);
  return Wire.read();
}

void PMBus::ReceiveBytes(PM_COMMAND cmd, uint8_t rail, uint8_t *buffer, size_t len)
{
  Wire.beginTransmission(this->address);
  Wire.write(PM_COMMAND::PAGE);
  Wire.write(rail);
  Wire.endTransmission();

  Wire.beginTransmission(this->address);
  Wire.write(cmd);
  Wire.endTransmission();

  Wire.requestFrom(this->address, len);
  Wire.readBytes(buffer, len);
}

void PMBus::ReceiveBytes(PM_COMMAND cmd, uint8_t *buffer, size_t len)
{
  Wire.beginTransmission(this->address);
  Wire.write(cmd);
  Wire.endTransmission();

  Wire.requestFrom(this->address, len);
  Wire.readBytes(buffer, len);
}

uint8_t PMBus::ReceiveGlobal(PM_COMMAND cmd)
{
  Wire.beginTransmission(this->address);
  Wire.write(cmd);
  Wire.endTransmission();

  Wire.requestFrom(this->address, (uint8_t)1);
  return Wire.read();
}

void PMBus::Command(PM_COMMAND cmd)
{

  Wire.beginTransmission(this->address);
  Wire.write(cmd);
  Wire.endTransmission();
}

void PMBus::Send(PM_COMMAND cmd, uint8_t rail, uint8_t byte)
{
  Wire.beginTransmission(this->address);
  Wire.write(PM_COMMAND::PAGE);
  Wire.write(rail);
  Wire.endTransmission();

  Wire.beginTransmission(this->address);
  Wire.write(cmd);
  Wire.write(byte);
  Wire.endTransmission();
}

void PMBus::SendGlobal(PM_COMMAND cmd, uint8_t byte)
{
  Wire.beginTransmission(this->address);
  Wire.write(cmd);
  Wire.write(byte);
  Wire.endTransmission();
}
#pragma endregion
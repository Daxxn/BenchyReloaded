#include <Arduino.h>
#include <Wire.h>
#include "PMBus.h"

const int PWR_ON_RST_PIN =  PIN_PA4;
const int PWR_ON =  PIN_PA5;
const int PMBUS_ALERT_PIN = PIN_PA6;
const int PWR_SW_PIN = PIN_PA7;

const int ALL_GOOD_PIN = PIN_PB4;
const int PERIPH_EN_PIN = PIN_PB5;
const int PWR_ERR_PIN = PIN_PC0;
const int USB_EN_PIN = PIN_PC1;
const int DDR_EN_PIN = PIN_PC2;
const int VDDA_EN_PIN = PIN_PC3;

const uint8_t PMBusAddress = 0x6F;

PMBusState state = PMBusState();
PMBus pmBus = PMBus(PMBUS_ALERT_PIN, PMBusAddress);

// Power switch state for MPU
bool btnPrev = false;
bool powerON = false;

void InitPins()
{
  // PORTA_DIRSET   = 0;
  // PORTB_DIRSET   = 0b00100000;
  // PORTC_DIRSET   = 0b00001111;
  // // PORTC_PIN0CTRL = 0b10000000;

  // PORTB_OUT = 0;
  // PORTC_OUT = 0;

  pinMode(PWR_ON_RST_PIN, INPUT);
  pinMode(PWR_ON, INPUT);
  pinMode(PWR_SW_PIN, INPUT);
  pinMode(ALL_GOOD_PIN, INPUT);
  pinMode(PERIPH_EN_PIN, OUTPUT);
  pinMode(PWR_ERR_PIN, OUTPUT);
  pinMode(USB_EN_PIN, OUTPUT);
  pinMode(DDR_EN_PIN, OUTPUT);
  pinMode(VDDA_EN_PIN, OUTPUT);
}

void WriteSettings()
{
  // pmBus.SoftReset();
  delay(1000);
  // pmBus.SetEnablePins(PM_ENABLE_CONFIG::ALL_ACTIVE);

  // pmBus.WriteAllSettings();

  // uint8_t startSeq[4] = {1, 2, 3, 3};
  // uint8_t stopSeq[4] = {3, 3, 2, 1};
  // pmBus.SetSequences(startSeq, stopSeq);

  // pmBus.SetWriteProtection(PM_WRITE_PROTECT::ALL_ENABLE);
  // pmBus.SetEnablePins(PM_ENABLE_CONFIG::ALL_INACTIVE);
  #ifdef WRITE_SETTINGS
  pmBus.WriteAllSettings(true);
  #else
  pmBus.WriteAllSettings(false);
  #endif
}

void PinStartupSeq()
{
  digitalWrite(DDR_EN_PIN, HIGH);
  digitalWrite(USB_EN_PIN, HIGH);
}

void Blink(int count)
{
  for (size_t i = 0; i < count; i++)
  {
    // PORTC_OUTSET = 1;
    digitalWrite(PWR_ERR_PIN, HIGH);
    delay(100);
    // PORTC_OUTCLR = 1;
    digitalWrite(PWR_ERR_PIN, LOW);
    delay(100);
  }
}

void setup() {
  InitPins();
  digitalWrite(PWR_ERR_PIN, HIGH);
  state.EnableConfig = PM_ENABLE_CONFIG::ALL_INACTIVE;
  // state.SequenceConfig = PM_SEQUENCE_CONFIG::INGORE_PGOOD;
  state.Rails[0] = RailStatus(); // VDD
  state.Rails[1] = RailStatus(); // VDD-CORE
  state.Rails[2] = RailStatus(); // VDD-DDR
  state.Rails[3] = RailStatus(); // USB-CORE
  state.Rails[0].Sequence.Set(0, 3);
  state.Rails[1].Sequence.Set(1, 2);
  state.Rails[2].Sequence.Set(2, 1);
  state.Rails[3].Sequence.Set(3, 0);
  #ifdef MAN
  state.Rails[0].Delay.Set(0, 100);
  state.Rails[1].Delay.Set(100, 100);
  state.Rails[2].Delay.Set(100, 100);
  state.Rails[3].Delay.Set(100, 0);
  #else
  state.Rails[0].Delay.Set(0, 0b100);
  state.Rails[1].Delay.Set(0b010, 0b010);
  state.Rails[2].Delay.Set(0b100, 0b100);
  state.Rails[3].Delay.Set(0b100, 0);
  #endif
  // Serial.begin(115200);
  pmBus.Init(&state);
  // #ifdef MAN
  // if(powerON)
  // {
  //   pmBus.ManualSequence(PM_RAIL_STATE::ENABLE);
  // }
  // #else
  // #endif
  WriteSettings();
  digitalWrite(VDDA_EN_PIN, HIGH);
  delay(100);
  digitalWrite(PWR_ERR_PIN, LOW);
  digitalWrite(DDR_EN_PIN, HIGH);
}

void loop() {
  #ifndef MAN
  // Blink(2);
  digitalWrite(PWR_ERR_PIN, HIGH);
  // digitalWrite(USB_EN_PIN, HIGH);
  pmBus.EnableAllRails();
  // delay(1000);
  digitalWrite(PWR_ERR_PIN, LOW);
  delay(5000);
  // digitalWrite(USB_EN_PIN, LOW);
  pmBus.DisableAllRails();
  Blink(4);

  // delay(4000);
  // pmBus.ReadStatus(0);
  // pmBus.ReadRailPGOODs();
  // Blink(pmBus.GetPGoods());

  delay(5000);
  #else
  // Blink(4);
  uint8_t btn = digitalRead(PWR_SW_PIN);
  if (btn == LOW && btn != btnPrev)
  {
    powerON = !powerON;
    btnPrev = btn;
    pmBus.ManualSequence(powerON ? PM_RAIL_STATE::ENABLE : PM_RAIL_STATE::DISABLE);
    delay(150);
    Blink(4);
  }
  #endif
}
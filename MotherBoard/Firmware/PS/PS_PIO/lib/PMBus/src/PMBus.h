#pragma once

#include <Arduino.h>
#include <Wire.h>
#include "PMBusState.h"

#define RAIL_COUNT 4

class PMBus
{
public:
  PMBus(const int alertPin, const uint8_t address);
  ~PMBus();

  // Starts the I2C bus.
  // If the I2C bus is already started, this can be omitted.
  void Init(PMBusState *state);

  // Set the startup sequence for the power rails.
  void SetSequence(uint8_t rail, uint8_t start, uint8_t stop);

  // Set the phase delay for the power rails.
  // Power rail 1 will always be the reference and is always zero.
  void SetPhase(uint8_t rail, RailPhase phase);

  // Sets the state of the enable pins.
  void SetEnablePins(PM_ENABLE_CONFIG config);

  void SetMaxCurrent(uint8_t rail, uint8_t max);

  // Set the ON time and OFF time delay for the power rails.
  void SetOnOffDelay(uint8_t rail, uint8_t onDelay, uint8_t offDelay);
  // Set all power rail ON and OFF time delays.
  void SetAllOnOffDelays(uint8_t onDelay, uint8_t offDelay);

  // Enable all power rails.
  // Will be ignored if the enable pins are set to PM_ENABLE_CONFIG::ALL_ACTIVE
  void EnableAllRails();
  
  // Disable all power rails.
  // Will be ignored if the enable pins are set to PM_ENABLE_CONFIG::ALL_ACTIVE
  void DisableAllRails();
  // Set the state of the specified power rail.
  // Will be ignored if the enable pins are set to PM_ENABLE_CONFIG::ALL_ACTIVE
  void SetRail(uint8_t rail, PM_RAIL_STATE en);

  // Gets the status of the IC. Including any faults.
  void ReadStatus(uint8_t rail);

  // Triggers a system reset for the IC.
  // Equivalent to the RESET pin.
  void SoftReset();
  
  // Enables or disables the write protection for the PMBus.
  //
  // WP == true: only OPERATION, PAGE, and WRITE_PROTECT commands are accepted.
  // WP == false: ALL commands are accepted.
  void SetWriteProtection(PM_WRITE_PROTECT wp);
  // Saves all settings to the PMBus ICs on-board EEPROM.
  void SaveCurrentSettings();

  void WriteAllSettings();
private:
  PMBusState *state;
  uint8_t *receiveBuffer;
  
  uint8_t address;
  int alertPin;

  PM_WRITE_PROTECT wp = PM_WRITE_PROTECT::DISABLE_SETTING1;

  void SendSequences();
  void SendAllPhases();
  void SendEnablePins();
  void SendAllMaxCurrent();
  void SendOnOffDelay();

  void Command(PM_COMMAND cmd);

  // Send byte over the PMBus
  void Send(PM_COMMAND cmd, uint8_t rail, uint8_t byte);

  void SendGlobal(PM_COMMAND cmd, uint8_t byte);

  // Receive a byte of data from the PMBus
  uint8_t Receive(PM_COMMAND cmd, uint8_t rail);

  // Receive data from the PMBus
  void ReceiveBytes(PM_COMMAND cmd, uint8_t rail, uint8_t *buffer, size_t len);
};
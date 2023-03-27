#pragma once

#include <Arduino.h>

#define RAIL_COUNT 4

enum PM_COMMAND
{
  // (R/W) Sets the current Power Rail
  PAGE = 0x00,
  // (R/W) Set Enable/Disable state of the power rail
  // -- PAGE --
  OPERATION = 0x01,
  // (T) Clears power rail faults that might be present
  // Required to restart the rail after a fault
  // -- PAGE --
  CLEAR_FAULTS = 0x03,
  // (R/W) Set the write protection state for all commands except:
  // PAGE, OPERATION, and WRITE_PROTECT
  WRITE_PROTECT = 0x10,
  // (T) Stores all settings to the ICs EEPROM
  STORE_DEFAULT_ALL = 0x11,
  // (R) Get the capabilities of the PMBus interface for the IC
  CAPABILITY = 0x19,
  // (R) Get pertinent status of the IC
  // -- PAGE --
  STATUS_BYTE = 0x78,
  // (R) Get status of the IC
  // -- PAGE --
  STATUS_WORD = 0x79,
  // (R) Get the status of VOUT
  // -- PAGE --
  STATUS_VOUT = 0x7A,
  // (R) Get manufacturer specific status data from the IC
  STATUS_MFR_SPECIFIC = 0x80,
  // (R) Get the PMBus interface revision
  PMBUS_REVISION = 0x98,
  // (R) Get the Device ID
  // Total byte length: 7 bytes (56 bits)
  IC_DEVICE_ID = 0xAD,
  // (R) Get the device revision
  IC_DEVICE_REV = 0xAE,
  // (R/W) A byte (8 bits) of data for the user
  USER_DATA_BYTE_00 = 0xD0,
  // (R/W) A byte (7 bits) of data for the user
  USER_DATA_BYTE_01 = 0xD1,
  // (R/W) Configure the ENABLE and PGOOD pin functions for each power rail
  PIN_CONFIG_00 = 0xD2,
  // (R/W) Selects either Soft-Start or Individual PGOOD for each power rail
  // -- PAGE --
  PIN_CONFIG_01 = 0xD3,
  // (R/W) Determines if the power rail will check for a previous PGOOD before starting
  SEQUENCE_CONFIG = 0xD4,
  // (R/W) Set the startup and shutdown sequence of the power rails
  // -- PAGE --
  SEQUENCE_ORDER = 0xD5,
  // (R/W) Set the current sharing mode and the
  // CCM (Constant-Current-Mode) / DCM (Direct-Current-Mode) of the power rails
  // -- PAGE --
  IOUT_MODE = 0xD6,
  // (R/W) Set the phase delay for each power rail
  // Power rail 1 will be the zero point
  // -- PAGE --
  FREQUENCY_PHASE = 0xD7,
  // (R/W) Set the internal voltage reference for power rail feedback
  // -- PAGE --
  VREF_COMMAND = 0xD8,
  // (R/W) Set the maximum current of the power rails
  // -- PAGE --
  IOUT_MAX = 0xD9,
  // (R/W) Contains the RESET flag. The IC will clear the flag after a reset
  USER_RAM_00 = 0xDA,
  // (T) Trigger a reset of the IC
  // Equivalent to the RESET pin.
  SOFT_RESET = 0xDB,
  // (R/W) Set the startup sequence delay (ms) after a reset has been cleared
  RESET_DELAY = 0xDC,
  // (R/W) Set the ON time and the OFF time of the power rails
  // -- PAGE --
  TON_TOFF_DELAY = 0xDD,
  // (R/W) Set the ON time ramp curve
  // Ignored by default. Only used when the SS pin is set to PGOOD for the individual power rail.
  // -- PAGE --
  TON_TRANSITION_RATE = 0xDE,
  // (R/W) Determines the stepping rate and stepping size when dynamically switching the VREF of the power rail
  // -- PAGE --
  VREF_TRANSITION_RATE = 0xDF,
  // (R/W) Modify the control loop to compensate for inductor ripple current harmonics from switching
  // -- PAGE --
  SLOPE_COMPENSATION = 0xF0,
  // (R/W) modifies the current sense (Gmps) of the feedback loop for the power rail
  // -- PAGE --
  ISENSE_GAIN = 0xF1,
  // (R) A 2 byte read-only device code
  DEVICE_CODE = 0xFC,

  // Not a valid command. Used for indicating a null command.
  NONE = 0xFF
};

// Bit mask used to filter the STATUS_BYTE data
// enum PM_STATUS_MASK
// {
//   VOUT_FAULT = 0x8000,
//   MFR_FAULT  = 0x1000,
//   PWR_BAD    = 0x0800,
//   OFF        = 0x0040,
//   VOUT_OV    = 0x0020,
//   IOUT_OC    = 0x0010,
//   TEMP       = 0x0004,
//   CML        = 0x0002,
//   UNKNOWN    = 0x0001
// };

enum PM_STATUS_MASK
{
  VOUT = 0x8000,
  MFR = 0x1000,
  PWR_GOOD = 0x800,
  OFF = 0x40,
  VOUT_OV = 0x20,
  IOUT_OC = 0x10,
  OVERTEMP = 0x4,
  CML = 0x2,
  NONEOFABOVE = 0x1
};

// VOUT status
enum PM_VOUT_STATUS
{
  OV = 0x80,
  UV = 0x10
};

enum PM_SEQUENCE_CONFIG
{
  // Checks the previous rails PGOOD status before starting
  CHECK_PGOOD,
  // Start without checking PGOOD status
  INGORE_PGOOD
};

// Disable or Enable a power rail
enum PM_RAIL_STATE
{
  DISABLE = 0x4000,
  ENABLE = 0x8000
};

enum PM_RAIL_OPERATION
{
  DISABLE_IMME = 0b00000000,
  DISABLE_RAIL = 0b01000000,
  ENABLE_RAIL =  0b10000000
};

// static const uint8_t RESET_DELAY_DISP[8] = {
//   1,50,100,250,500,1000,1500,2000
// };

// Enable pin config
// Determines how the power rail enable pins are used.
enum PM_ENABLE_CONFIG
{
  // All enable pins are controlled individually
  ALL_ACTIVE = 0x00,
  // All enable pins are ignored
  ALL_INACTIVE = 0x01,
  // Rail 1 Enable pin starts the start/stop sequence, all others are ignored.
  SEQUENCE = 0x10
};

enum PM_WRITE_PROTECT
{
  // Disable all commands
  DISABLE_ALL = 0x80,
  // Disable all commands except:
  // WRITE_PROTECT | OPERATION | PAGE
  DISABLE_SETTING1 = 0x40,
  // Disable all commands except:
  // WRITE_PROTECT | OPERATION | PAGE | VREF_COMMAND
  DISABLE_SETTING2 = 0x20,
  // Enable all commands
  ALL_ENABLE = 0x00
};

enum CLOCK_DIV
{
  WHOLE = 0x00,
  HALF = 0x01,
  QUARTER = 0x02,
  EIGTH = 0x03
};

struct RailPhase
{
  uint8_t Delay;
  CLOCK_DIV Div;
  uint8_t GetByte()
  {
    return (Delay & 0b00111111) << 2 | (Div & 0b11);
  }
  void Set(uint8_t del, CLOCK_DIV div)
  {
    Delay = del;
    Div = div;
  }
};

struct RailSequence
{
  uint8_t Start;
  uint8_t Stop;
  uint8_t GetByte()
  {
    return ((Stop & 0b11) << 2) | (Start & 0b11);
  };
  void Set(uint8_t start, uint8_t stop)
  {
    Start = start;
    Stop = stop;
  };
};



struct RailDelay
{
  uint8_t ON;
  uint8_t OFF;

  void Set(uint8_t on, uint8_t off)
  {
    ON = on;
    OFF = off;
  }

  uint8_t GetByte()
  {
    return ((ON & 0b111) << 3) | (OFF & 0b111);
  }
};

struct RailStatus
{
  RailStatus() {};
  PM_RAIL_STATE Enable = PM_RAIL_STATE::DISABLE;
  bool OverVolt = false;
  bool OverCurr = false;
  bool OFF = true;
  bool PGOOD = false;
  uint8_t MaxIOut = 0x03;
  RailDelay Delay = RailDelay();
  RailPhase Phase = RailPhase();
  RailSequence Sequence = RailSequence();
};

class PMBusState
{
public:
  PMBusState();
  // RailPGood PGoods = RailPGood();

  // Write protection state
  // Determines what commands the IC will respond to.
  PM_WRITE_PROTECT WriteProtect = PM_WRITE_PROTECT::DISABLE_SETTING1;

  // State:
  // The last command sent
  PM_COMMAND PrevCommand = PM_COMMAND::NONE;

  // Enable pin config status
  PM_ENABLE_CONFIG EnableConfig;

  // Sets the PGOOD pin sequence config
  PM_SEQUENCE_CONFIG SequenceConfig;

  //Status:

  // Power rail status array
  // Includes status, readings, and faults.
  RailStatus *Rails;

  //Faults:

  // IC Over-Temp Fault
  bool OverTemp = false;

  // Command Fault
  bool CmdFault;

  // Manufacturer Specific Fault
  bool MfrFault;

  // PGOOD state
  bool PwrGood;
};
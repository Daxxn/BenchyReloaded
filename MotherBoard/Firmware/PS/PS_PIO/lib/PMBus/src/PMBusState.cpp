#include <Arduino.h>
#include "PMBusState.h"

PMBusState::PMBusState()
{
  PrevCommand = PM_COMMAND::NONE;
  this->Rails = new RailStatus[4];
}
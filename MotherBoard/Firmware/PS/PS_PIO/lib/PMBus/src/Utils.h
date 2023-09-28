#pragma once

#include <Arduino.h>

uint16_t BuildWord(uint8_t upper, uint8_t lower)
{
  return (uint16_t)((upper << 8) | lower);
}
#pragma once

#include <Arduino.h>
#include "KeyPinMap.hpp"
#include "KeyColor.hpp"
#include "PinConstants.hpp"


struct ColoredKeyPinMap : public KeyPinMap {
  ColoredKeyPinMap(uint16_t keyValue, KeyColor color, const Controller::PinPair& pins);
  ColoredKeyPinMap(const ColoredKeyPinMap& copy);

  KeyColor Color;
};

#pragma once

#include <Arduino.h>
#include "PinConstants.hpp"


struct KeyPinMap {
  KeyPinMap(uint16_t keyValue, const Controller::PinPair& pins);
  KeyPinMap(const KeyPinMap& copy);
  
  const uint16_t KeyValue;
  const Controller::PinPair Pins;
};

// Default comparison function for C library functions qsort and bsearch.
int KeyPinMap_Compare(const void* lhs, const void* rhs);

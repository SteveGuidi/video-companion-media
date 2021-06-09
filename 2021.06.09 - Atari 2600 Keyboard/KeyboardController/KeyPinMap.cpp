#include "KeyPinMap.hpp"


KeyPinMap::KeyPinMap(uint16_t keyValue, const Controller::PinPair& pins) :
  KeyValue(keyValue), Pins(pins) { }

KeyPinMap::KeyPinMap(const KeyPinMap& copy) :
  KeyValue(copy.KeyValue), Pins(copy.Pins) { }

int KeyPinMap_Compare(const void* lhs, const void* rhs) {
  return static_cast<const KeyPinMap*>(lhs)->KeyValue - static_cast<const KeyPinMap*>(rhs)->KeyValue;
}

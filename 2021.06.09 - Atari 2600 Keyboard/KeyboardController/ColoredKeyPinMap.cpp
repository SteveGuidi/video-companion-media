#include "ColoredKeyPinMap.hpp"


ColoredKeyPinMap::ColoredKeyPinMap(uint16_t keyValue, KeyColor color, const Controller::PinPair& pins) :
  KeyPinMap(keyValue, pins), Color(color) { }
  
ColoredKeyPinMap::ColoredKeyPinMap(const ColoredKeyPinMap& copy) :
  KeyPinMap(copy), Color(copy.Color) { }

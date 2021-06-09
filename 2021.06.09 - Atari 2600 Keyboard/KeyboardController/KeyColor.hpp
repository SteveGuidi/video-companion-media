#pragma once

#include <Arduino.h>


enum class KeyColor : uint8_t {
  White = 0x01,
  Red   = 0x02,
  Blue  = 0x04,
  Green = 0x08,
  All   = 0x0F  // Sum all values aboce.
};

constexpr KeyColor operator|(KeyColor lhs, KeyColor rhs) {
  return static_cast<KeyColor>(static_cast<uint8_t>(lhs) | static_cast<uint8_t>(rhs));
}

constexpr KeyColor operator&(KeyColor lhs, KeyColor rhs) {
  return static_cast<KeyColor>(static_cast<uint8_t>(lhs) & static_cast<uint8_t>(rhs));
}

inline KeyColor next(KeyColor color) {
  if (color == KeyColor::Green) return KeyColor::White;
  if (color == KeyColor::All) return color;
  return static_cast<KeyColor>(static_cast<uint8_t>(color) << 1);
}

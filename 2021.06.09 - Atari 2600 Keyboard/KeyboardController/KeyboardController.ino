#include <Arduino.h>
#include "PS2KeyAdvanced.h"
#include "ColoredAtariKeyboard.hpp"
#include "BasicProgrammingKeyMap.hpp"
#include "Utility.hpp"


PS2KeyAdvanced ps2Keyboard;

ColoredAtariKeyboard<> atariKeyboard(
  Mapping::BasicProgrammingKeyMap,
  util::size(Mapping::BasicProgrammingKeyMap),
  { Controller::ScanPin::Left_4, Controller::OutputPin::Left_9 });


void setup() {
  // Initialize keyboard drivers.
  atariKeyboard.Begin();
  ps2Keyboard.begin(PS2::DataPin, PS2::ClockIRQPin);
}

void loop() {
  if (ps2Keyboard.available()) {
    uint16_t key(ps2Keyboard.read());
    if (key > 0) {
      atariKeyboard.Write(key);
    }
  }
}

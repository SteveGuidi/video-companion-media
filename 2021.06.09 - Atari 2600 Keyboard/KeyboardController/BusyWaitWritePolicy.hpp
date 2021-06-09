#pragma once

#include <Arduino.h>
#include "PinConstants.hpp"


struct BusyWaitWritePolicy {
  void Begin() const {
    // No initialization required.
  }
  
  void Write(const Controller::PinPair& pins) const {
    const uint8_t outputPin(static_cast<uint8_t>(pins.outputPin));
    
    // Wait for the scanning pin transisitions before setting the corresponding
    // output pin state.  Restore the output pin to the HIGH state when completed.
    for(uint8_t i(0); i <= CyclesPerKeyPress; ++i) {
      WaitForPinState(pins.scanPin, HIGH);
      digitalWrite(outputPin, HIGH);
      WaitForPinState(pins.scanPin, LOW);
      digitalWrite(outputPin, LOW);
    }
    
    digitalWrite(outputPin, HIGH);
  };

  private:

    // Increase this value to slow down the translation of key presses.
    // Equivalent to holding down a physical key for a longer period of time
    // with no repetition from the device's controller circuit.
    // Minimum/fastest value is 2.
    static constexpr uint8_t CyclesPerKeyPress = 8;
    
    static void WaitForPinState(Controller::ScanPin pin, uint8_t state) {
      while(digitalRead(static_cast<uint8_t>(pin)) != state) { }
    }
};

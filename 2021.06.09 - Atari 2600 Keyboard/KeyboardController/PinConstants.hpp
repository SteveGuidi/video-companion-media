#pragma once

#include <Arduino.h>


// PS/2 keyboard data and clock pins.
// The PS/2 clock signal MUST map to an external IRQ pin,
// as per the requirements of the PS2KeyAdvanced library.
namespace PS2 {
  const uint8_t ClockIRQPin(3);
  const uint8_t DataPin(4);
}


//
// User-defined Arduino pin allocations.
//
// Alter the following digital pin assignments as per your controller
// cable (joystick port) and keyboard interfacing selections.
// 
// SCAN pins {1..4} respectively correspond to rows {1..4} on each controller.
// OUTPUT pins {5,9,6} respectively correspond to columns {1,2,3} on each controller.
//
namespace Controller {
  enum class ScanPin : uint8_t {
    Left_1  = 14,
    Left_2  = 17,
    Left_3  = 18,
    Left_4  = 19,
    Right_1 =  9,
    Right_2 = 10,
    Right_3 = 11,
    Right_4 = 12
  };

  enum class OutputPin : uint8_t {
    Left_5  = 15,
    Left_9  = 16,
    Left_6  = 13,
    Right_5 =  7,
    Right_9 =  8,
    Right_6 =  6
  };

  //
  // Hand-coded helper arrays for enum iteration.
  // Modify accordingly to include defined digital pin mapping from ScanPin.
  //
  constexpr ScanPin ScanPins[] = {
    ScanPin::Left_1, ScanPin::Left_2, ScanPin::Left_3, ScanPin::Left_4,
    ScanPin::Right_1, ScanPin::Right_2, ScanPin::Right_3, ScanPin::Right_4
  };

  constexpr OutputPin OutputPins[] = {
    OutputPin::Left_5, OutputPin::Left_9, OutputPin::Left_6,
    OutputPin::Right_5, OutputPin::Right_9, OutputPin::Right_6
  };

  //
  // Helper structure to couple scan and output pins in memory.
  //
  struct PinPair {
    PinPair(ScanPin scanPin, OutputPin outputPin) : scanPin(scanPin), outputPin(outputPin) { }
    PinPair(const PinPair& copy) : scanPin(copy.scanPin), outputPin(copy.outputPin) { }
    
    const PinPair& operator=(const PinPair& rhs) {
      scanPin = rhs.scanPin;
      outputPin = rhs.outputPin;
      return *this;
    }
    
    ScanPin scanPin;
    OutputPin outputPin;
  };
}

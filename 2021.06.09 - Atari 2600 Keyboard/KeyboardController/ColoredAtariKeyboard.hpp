#pragma once

#include <Arduino.h>
#include "AtariKeyboard.hpp"
#include "ColoredKeyPinMap.hpp"
#include "KeyColor.hpp"
#include "PinConstants.hpp"
#include "Utility.hpp"


template <typename TKeyWritePolicy = BusyWaitWritePolicy>
class ColoredAtariKeyboard : public AtariKeyboard<TKeyWritePolicy, ColoredKeyPinMap> {
  public:
  
    ColoredAtariKeyboard(const ColoredKeyPinMap* keyMapping, size_t keyMappingSize, const Controller::PinPair& colorChangePins) :
      AtariKeyboard<TKeyWritePolicy, ColoredKeyPinMap>(keyMapping, keyMappingSize),
      _colorChangePins(colorChangePins),
      _currentColor(KeyColor::White) { }

    virtual void Begin() const {
      AtariKeyboard<TKeyWritePolicy, ColoredKeyPinMap>::Begin();
    
      // Set the pin-mode of the color-change scan and output pins, as
      // these might not be explicitly mapped to a keyboard key.
      pinMode(static_cast<uint8_t>(_colorChangePins.scanPin), INPUT);
      pinMode(static_cast<uint8_t>(_colorChangePins.outputPin), OUTPUT);
    };
    
    virtual bool Write(uint16_t keyValue) {
      const ColoredKeyPinMap* keyPinMap(FindKeyMapping(keyValue));
      if (keyPinMap == NULL) return false;

      EnsureColor(keyPinMap->Color);
      TKeyWritePolicy::Write(keyPinMap->Pins);
      return true;
    };
    
  private:
  
    void EnsureColor(KeyColor color) {
      while ((_currentColor & color) != _currentColor) {
        TKeyWritePolicy::Write(_colorChangePins);
        _currentColor = next(_currentColor);
      }
    };

    const Controller::PinPair _colorChangePins;
    KeyColor _currentColor;
};

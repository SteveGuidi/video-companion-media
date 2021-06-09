#pragma once

#include <Arduino.h>
#include "KeyPinMap.hpp"
#include "PinConstants.hpp"
#include "BusyWaitWritePolicy.hpp"


template <typename TKeyWritePolicy = BusyWaitWritePolicy, typename TKeyPinMap = KeyPinMap>
class AtariKeyboard : protected TKeyWritePolicy {
  public:
    
    AtariKeyboard(const TKeyPinMap* keyMapping, size_t keyMappingSize) :
      _keyMapping(keyMapping), _keyMappingSize(keyMappingSize) {

      // Ensure key mapping is sorted by key value.
      // Array lookups are performed via binary search using KeyMap_Compare.
      qsort(_keyMapping, _keyMappingSize, sizeof(TKeyPinMap), KeyPinMap_Compare);
    };
    
    virtual void Begin() const {
      // Initialize the state of the key writing policy.
      TKeyWritePolicy::Begin();
      
      // Initialize the pin-mode of each scan pins and output pins.
      for (Controller::ScanPin pin : Controller::ScanPins) {
        pinMode(static_cast<uint8_t>(pin), INPUT);
      }

      for (Controller::OutputPin pin : Controller::OutputPins) {
        pinMode(static_cast<uint8_t>(pin), OUTPUT);
        digitalWrite(static_cast<uint8_t>(pin), HIGH);
      }
    };
    
    virtual bool Write(uint16_t keyValue) {
      const TKeyPinMap* keyPinMap(FindKeyMapping(keyValue));
      if (keyPinMap == NULL) return false;
    
      TKeyWritePolicy::Write(keyPinMap->Pins);
      return true;
    };
    
  protected:

    const TKeyPinMap* FindKeyMapping(uint16_t keyValue) const {
        return static_cast<TKeyPinMap*>(
          bsearch(&keyValue, _keyMapping, _keyMappingSize, sizeof(TKeyPinMap), KeyPinMap_Compare));
    };

  private:
    
    const TKeyPinMap* _keyMapping;
    const size_t _keyMappingSize;
};

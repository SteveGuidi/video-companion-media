#pragma once

#include <Arduino.h>


//
// Types and algorithms found in the C++ Standard Library,
// and otherwise unavailable on the Arduino platform.
//

namespace util {

  //
  // Equivalent to std::size
  //
  template <typename TArray, size_t N>
  constexpr size_t size(TArray(&)[N]) { return N; }

  //
  // A subset of std::queue<T>
  //
  template <typename T, uint8_t Capacity>
  class queue {
    public:
      queue() : _queueFrontPos(0), _nextInsertPos(0), _count(0) { }

      bool empty() const {
        return _count == 0;
      }

      uint8_t size() const {
        return _count;
      }
      
      bool push(const T& value) {
        if (_count == Capacity) return false;
        
        _data[_nextInsertPos] = value;
        _nextInsertPos = (_nextInsertPos + 1) % Capacity;
        ++_count;
        
        return true;
      }

      void pop() {
        if (!empty()) {
          _queueFrontPos = (_queueFrontPos + 1) % Capacity;
          --_count;
        }
      }

      const T& front() const {
        return _data[_queueFrontPos];
      }
      
    private:
      uint8_t _queueFrontPos;
      uint8_t _nextInsertPos;
      uint8_t _count;
      T _data[Capacity];
  };
}

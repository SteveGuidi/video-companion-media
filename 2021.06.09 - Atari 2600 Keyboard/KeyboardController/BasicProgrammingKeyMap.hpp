#pragma once

#include "PS2KeyAdvanced.h"
#include "ColoredKeyPinMap.hpp"


namespace Mapping {
  
  //
  // Registration of all PS/2 -> Atari Keyboard key mappings for the
  // BASIC PROGRAMMING cartridge.
  //
  
  const ColoredKeyPinMap BasicProgrammingKeyMap[] = {
    ColoredKeyPinMap(PS2_FUNCTION | PS2_KEY_F10,  KeyColor::All, { Controller::ScanPin::Left_4, Controller::OutputPin::Left_5 }),     // RUN/HALT
    ColoredKeyPinMap(PS2_FUNCTION | PS2_KEY_TAB,  KeyColor::All, { Controller::ScanPin::Left_4, Controller::OutputPin::Left_9 }),     // COLOR
    ColoredKeyPinMap(PS2_FUNCTION | PS2_KEY_BS,   KeyColor::All, { Controller::ScanPin::Left_4, Controller::OutputPin::Left_6 }),     // ERASE
  
    ColoredKeyPinMap(PS2_FUNCTION | PS2_KEY_F1,   KeyColor::White, { Controller::ScanPin::Left_1, Controller::OutputPin::Left_5 }),   // STATUS
    ColoredKeyPinMap(PS2_FUNCTION | PS2_KEY_F2,   KeyColor::White, { Controller::ScanPin::Left_1, Controller::OutputPin::Left_9 }),   // PROGRAM
    ColoredKeyPinMap(PS2_FUNCTION | PS2_KEY_F3,   KeyColor::White, { Controller::ScanPin::Left_1, Controller::OutputPin::Left_6 }),   // STACK
    ColoredKeyPinMap(PS2_FUNCTION | PS2_KEY_F4,   KeyColor::White, { Controller::ScanPin::Left_2, Controller::OutputPin::Left_5 }),   // VARIABLE
    ColoredKeyPinMap(PS2_FUNCTION | PS2_KEY_F5,   KeyColor::White, { Controller::ScanPin::Left_2, Controller::OutputPin::Left_9 }),   // OUTPUT
    ColoredKeyPinMap(PS2_FUNCTION | PS2_KEY_F6,   KeyColor::White, { Controller::ScanPin::Left_2, Controller::OutputPin::Left_6 }),   // GRAPHICS
    ColoredKeyPinMap(PS2_FUNCTION | PS2_KEY_F11,  KeyColor::White, { Controller::ScanPin::Left_3, Controller::OutputPin::Left_5 }),   // STEP
    ColoredKeyPinMap(PS2_CTRL | PS2_KEY_MINUS,    KeyColor::White, { Controller::ScanPin::Left_3, Controller::OutputPin::Left_9 }),   // SLOWER
    ColoredKeyPinMap(PS2_CTRL | PS2_KEY_EQUAL,    KeyColor::White, { Controller::ScanPin::Left_3, Controller::OutputPin::Left_6 }),   // FASTER
  
    ColoredKeyPinMap(PS2_FUNCTION | PS2_KEY_L_ARROW,  KeyColor::White, { Controller::ScanPin::Right_4, Controller::OutputPin::Right_5 }), // BACKWARD
    ColoredKeyPinMap(PS2_FUNCTION | PS2_KEY_R_ARROW,  KeyColor::White, { Controller::ScanPin::Right_4, Controller::OutputPin::Right_9 }), // FORWARD
    ColoredKeyPinMap(PS2_FUNCTION | PS2_KEY_ENTER,    KeyColor::White, { Controller::ScanPin::Right_4, Controller::OutputPin::Right_6 }), // NEW LINE
  
    ColoredKeyPinMap(PS2_SHIFT | PS2_KEY_EQUAL, KeyColor::Red, { Controller::ScanPin::Left_1, Controller::OutputPin::Left_5 }),     // +
    ColoredKeyPinMap(PS2_KEY_MINUS,             KeyColor::Red, { Controller::ScanPin::Left_1, Controller::OutputPin::Left_9 }),     // -
    ColoredKeyPinMap(PS2_SHIFT | PS2_KEY_SEMI,  KeyColor::Red, { Controller::ScanPin::Left_1, Controller::OutputPin::Left_6 }),     // ←
    ColoredKeyPinMap(PS2_SHIFT | PS2_KEY_8,     KeyColor::Red, { Controller::ScanPin::Left_2, Controller::OutputPin::Left_5 }),     // *
    ColoredKeyPinMap(PS2_KEY_DIV,               KeyColor::Red, { Controller::ScanPin::Left_2, Controller::OutputPin::Left_9 }),     // /
    ColoredKeyPinMap(PS2_SHIFT | PS2_KEY_N,     KeyColor::Red, { Controller::ScanPin::Left_2, Controller::OutputPin::Left_6 }),     // NOTE
    ColoredKeyPinMap(PS2_SHIFT | PS2_KEY_H,     KeyColor::Red, { Controller::ScanPin::Left_3, Controller::OutputPin::Left_5 }),     // HOR1
    ColoredKeyPinMap(PS2_SHIFT | PS2_KEY_V,     KeyColor::Red, { Controller::ScanPin::Left_3, Controller::OutputPin::Left_9 }),     // VER1
    ColoredKeyPinMap(PS2_SHIFT | PS2_KEY_K,     KeyColor::Red, { Controller::ScanPin::Left_3, Controller::OutputPin::Left_6 }),     // KEY
  
    ColoredKeyPinMap(PS2_KEY_1,                 KeyColor::Red, { Controller::ScanPin::Right_1, Controller::OutputPin::Right_5 }),   // 1
    ColoredKeyPinMap(PS2_KEY_2,                 KeyColor::Red, { Controller::ScanPin::Right_1, Controller::OutputPin::Right_9 }),   // 2
    ColoredKeyPinMap(PS2_KEY_3,                 KeyColor::Red, { Controller::ScanPin::Right_1, Controller::OutputPin::Right_6 }),   // 3
    ColoredKeyPinMap(PS2_KEY_4,                 KeyColor::Red, { Controller::ScanPin::Right_2, Controller::OutputPin::Right_5 }),   // 4
    ColoredKeyPinMap(PS2_KEY_5,                 KeyColor::Red, { Controller::ScanPin::Right_2, Controller::OutputPin::Right_9 }),   // 5
    ColoredKeyPinMap(PS2_KEY_6,                 KeyColor::Red, { Controller::ScanPin::Right_2, Controller::OutputPin::Right_6 }),   // 6
    ColoredKeyPinMap(PS2_KEY_7,                 KeyColor::Red, { Controller::ScanPin::Right_3, Controller::OutputPin::Right_5 }),   // 7
    ColoredKeyPinMap(PS2_KEY_8,                 KeyColor::Red, { Controller::ScanPin::Right_3, Controller::OutputPin::Right_9 }),   // 8
    ColoredKeyPinMap(PS2_KEY_9,                 KeyColor::Red, { Controller::ScanPin::Right_3, Controller::OutputPin::Right_6 }),   // 9
    ColoredKeyPinMap(PS2_ALT | PS2_KEY_H,       KeyColor::Red, { Controller::ScanPin::Right_4, Controller::OutputPin::Right_5 }),   // HOR2
    ColoredKeyPinMap(PS2_ALT | PS2_KEY_V,       KeyColor::Red, { Controller::ScanPin::Right_4, Controller::OutputPin::Right_9 }),   // VER2
    ColoredKeyPinMap(PS2_KEY_0,                 KeyColor::Red, { Controller::ScanPin::Right_4, Controller::OutputPin::Right_6 }),   // 0
  
    ColoredKeyPinMap(PS2_KEY_A,                 KeyColor::Blue, { Controller::ScanPin::Left_1, Controller::OutputPin::Left_5 }),    // A
    ColoredKeyPinMap(PS2_KEY_B,                 KeyColor::Blue, { Controller::ScanPin::Left_1, Controller::OutputPin::Left_9 }),    // B
    ColoredKeyPinMap(PS2_KEY_C,                 KeyColor::Blue, { Controller::ScanPin::Left_1, Controller::OutputPin::Left_6 }),    // C
    ColoredKeyPinMap(PS2_KEY_D,                 KeyColor::Blue, { Controller::ScanPin::Left_2, Controller::OutputPin::Left_5 }),    // D
    ColoredKeyPinMap(PS2_KEY_E,                 KeyColor::Blue, { Controller::ScanPin::Left_2, Controller::OutputPin::Left_9 }),    // E
    ColoredKeyPinMap(PS2_KEY_F,                 KeyColor::Blue, { Controller::ScanPin::Left_2, Controller::OutputPin::Left_6 }),    // F
    ColoredKeyPinMap(PS2_KEY_G,                 KeyColor::Blue, { Controller::ScanPin::Left_3, Controller::OutputPin::Left_5 }),    // G
    ColoredKeyPinMap(PS2_KEY_H,                 KeyColor::Blue, { Controller::ScanPin::Left_3, Controller::OutputPin::Left_9 }),    // H
    ColoredKeyPinMap(PS2_KEY_I,                 KeyColor::Blue, { Controller::ScanPin::Left_3, Controller::OutputPin::Left_6 }),    // I
  
    ColoredKeyPinMap(PS2_KEY_J,                     KeyColor::Blue, { Controller::ScanPin::Right_1, Controller::OutputPin::Right_5 }),  // J
    ColoredKeyPinMap(PS2_KEY_K,                     KeyColor::Blue, { Controller::ScanPin::Right_1, Controller::OutputPin::Right_9 }),  // K
    ColoredKeyPinMap(PS2_KEY_L,                     KeyColor::Blue, { Controller::ScanPin::Right_1, Controller::OutputPin::Right_6 }),  // L
    ColoredKeyPinMap(PS2_KEY_M,                     KeyColor::Blue, { Controller::ScanPin::Right_2, Controller::OutputPin::Right_5 }),  // M
    ColoredKeyPinMap(PS2_KEY_N,                     KeyColor::Blue, { Controller::ScanPin::Right_2, Controller::OutputPin::Right_9 }),  // N
    ColoredKeyPinMap(PS2_KEY_O,                     KeyColor::Blue, { Controller::ScanPin::Right_2, Controller::OutputPin::Right_6 }),  // O
    ColoredKeyPinMap(PS2_KEY_P,                     KeyColor::Blue, { Controller::ScanPin::Right_3, Controller::OutputPin::Right_5 }),  // P
    ColoredKeyPinMap(PS2_KEY_Q,                     KeyColor::Blue, { Controller::ScanPin::Right_3, Controller::OutputPin::Right_9 }),  // Q
    ColoredKeyPinMap(PS2_KEY_R,                     KeyColor::Blue, { Controller::ScanPin::Right_3, Controller::OutputPin::Right_6 }),  // R
    ColoredKeyPinMap(PS2_KEY_S,                     KeyColor::Blue, { Controller::ScanPin::Right_4, Controller::OutputPin::Right_5 }),  // S
    ColoredKeyPinMap(PS2_KEY_T,                     KeyColor::Blue, { Controller::ScanPin::Right_4, Controller::OutputPin::Right_9 }),  // T
    ColoredKeyPinMap(PS2_FUNCTION | PS2_KEY_SPACE,  KeyColor::Blue, { Controller::ScanPin::Right_4, Controller::OutputPin::Right_6 }),  // SPACE
  
    ColoredKeyPinMap(PS2_SHIFT | PS2_KEY_I,     KeyColor::Green, { Controller::ScanPin::Left_1, Controller::OutputPin::Left_5 }),   // IF
    ColoredKeyPinMap(PS2_SHIFT | PS2_KEY_T,     KeyColor::Green, { Controller::ScanPin::Left_1, Controller::OutputPin::Left_9 }),   // THEN
    ColoredKeyPinMap(PS2_SHIFT | PS2_KEY_E,     KeyColor::Green, { Controller::ScanPin::Left_1, Controller::OutputPin::Left_6 }),   // ELSE
    ColoredKeyPinMap(PS2_SHIFT | PS2_KEY_G,     KeyColor::Green, { Controller::ScanPin::Left_2, Controller::OutputPin::Left_5 }),   // GOTO
    ColoredKeyPinMap(PS2_SHIFT | PS2_KEY_DIV,   KeyColor::Green, { Controller::ScanPin::Left_2, Controller::OutputPin::Left_9 }),   // PRINT
    ColoredKeyPinMap(PS2_SHIFT | PS2_KEY_APOS,  KeyColor::Green, { Controller::ScanPin::Left_2, Controller::OutputPin::Left_6 }),   // "
    ColoredKeyPinMap(PS2_SHIFT | PS2_KEY_9,     KeyColor::Green, { Controller::ScanPin::Left_3, Controller::OutputPin::Left_5 }),   // (
    ColoredKeyPinMap(PS2_SHIFT | PS2_KEY_0,     KeyColor::Green, { Controller::ScanPin::Left_3, Controller::OutputPin::Left_9 }),   // )
    ColoredKeyPinMap(PS2_KEY_COMMA,             KeyColor::Green, { Controller::ScanPin::Left_3, Controller::OutputPin::Left_6 }),   // ,
  
    ColoredKeyPinMap(PS2_KEY_U,                 KeyColor::Green, { Controller::ScanPin::Right_1, Controller::OutputPin::Right_5 }), // U
    ColoredKeyPinMap(PS2_KEY_V,                 KeyColor::Green, { Controller::ScanPin::Right_1, Controller::OutputPin::Right_9 }), // V
    ColoredKeyPinMap(PS2_KEY_W,                 KeyColor::Green, { Controller::ScanPin::Right_1, Controller::OutputPin::Right_6 }), // W
    ColoredKeyPinMap(PS2_KEY_X,                 KeyColor::Green, { Controller::ScanPin::Right_2, Controller::OutputPin::Right_5 }), // X
    ColoredKeyPinMap(PS2_KEY_Y,                 KeyColor::Green, { Controller::ScanPin::Right_2, Controller::OutputPin::Right_9 }), // Y
    ColoredKeyPinMap(PS2_KEY_Z,                 KeyColor::Green, { Controller::ScanPin::Right_2, Controller::OutputPin::Right_6 }), // Z
    ColoredKeyPinMap(PS2_FUNCTION | PS2_SHIFT | PS2_KEY_HOME,  KeyColor::Green, { Controller::ScanPin::Right_3, Controller::OutputPin::Right_5 }), // CLEAR
    ColoredKeyPinMap(PS2_SHIFT | PS2_KEY_5,     KeyColor::Green, { Controller::ScanPin::Right_3, Controller::OutputPin::Right_9 }), // MOD
    ColoredKeyPinMap(PS2_ALT | PS2_KEY_T,       KeyColor::Green, { Controller::ScanPin::Right_3, Controller::OutputPin::Right_6 }), // HIT
    ColoredKeyPinMap(PS2_KEY_EQUAL,             KeyColor::Green, { Controller::ScanPin::Right_4, Controller::OutputPin::Right_5 }), // =
    ColoredKeyPinMap(PS2_SHIFT | PS2_KEY_DOT,   KeyColor::Green, { Controller::ScanPin::Right_4, Controller::OutputPin::Right_9 }), // >
    ColoredKeyPinMap(PS2_SHIFT | PS2_KEY_COMMA, KeyColor::Green, { Controller::ScanPin::Right_4, Controller::OutputPin::Right_6 })  // <
  };
}

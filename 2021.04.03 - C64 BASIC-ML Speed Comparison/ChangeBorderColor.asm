-- ChangeBorderColor.asm
--
-- Changes the screen border color on a Commodore 64 as fast as
-- possible, cycling through every possible color.
--
-- Assembled to memory address $C000, though any free memory location is
-- sufficient.  Execute with SYS49152 in BASIC, or G $C000 in a machine
-- language monitor.

-- 1. Directly incrememnts the border color value at memory address $D020
-- 2. Repeat
--
-- NOTE: The INC command operates on single byte.  An implicit modulus
--       operaetion occurs during overflow (i.e. 255 + 1 = 0)

A C000 EE 20 D0		INC $D020
A C003 4C 00 C0		JMP $C000

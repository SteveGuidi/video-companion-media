-- ChangeBorderColor.bas
--
-- Changes the screen border color on a Commodore 64 as fast as
-- possible, cycling through every possible color.
--
-- 1. Obtains the current border color value from memory address $D020
-- 2. Incrememnts the screen border color value modulus 255
-- 3. Writes the new border color value to memory address $D020
-- 4. Repeat
--
-- NOTE: the POKE command requires an integer from 0 to 255, and
--       a modulus  is used for partiy with the INC machine language
--       operation.

10	X%=PEEK(53280)
20	X%=(X%+1) - INT((X%+1)/255) * 255
30 	POKE 53280,X%
40 	GOTO 20

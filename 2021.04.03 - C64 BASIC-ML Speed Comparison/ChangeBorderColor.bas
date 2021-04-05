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

-- I was informed that the BASIC program above is not very efficient,
-- mainly due to the use of integer variables; all arithmetic operations
-- in BASIC are performed on floating point numbers.
--
-- Also, since the modulus is the max signed value for a byte (255), we
-- can replace the whole operation with a faster AND.

10  X=53280:M=255
20  POKEX,M AND PEEK(X)+1:GOTO 20

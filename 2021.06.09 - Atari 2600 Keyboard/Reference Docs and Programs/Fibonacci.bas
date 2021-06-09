-- Fibonacci.bas
--
-- Computes and displayes the Fibonacci sequence for the Atari 2600 "BASIC Programming"
-- cartridge program.  There is an implied modulus 100 operation to all computed values
-- as the BASIC Programming environment only allows integer values of 0 through 99.
--
-- Space characters between keywords and expressions are not required and
-- have been introduced for clarity.

1	Print "FIB(X)"
2	A←0 B←1
3	F←A+B A←B B←F
4	Goto 3

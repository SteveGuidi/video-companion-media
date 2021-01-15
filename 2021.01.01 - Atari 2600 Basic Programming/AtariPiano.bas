-- Piano.bas
--
-- Demonstrates the music capability and keypad input of "Basic Programming"
-- for the Atari 2600.  Translates the first eight keypad buttons into
-- musical notes [1..8] => Note[0..7].  Source code adapted from similar
-- program in the "Basic Programming" user manual, and modified to eliminate
-- invalid keypad inputs.
--
-- Space characters between keywords and expressions are not required and
-- have been introduced for clarity.

1	If Key>0 Then If Key<9 Then Note←Key-1
2	Goto 1


-- Modified program without race condition on Key function

1	A←Key
2	If A>0 Then If A<9 Then Note←A-1
3	Goto 1

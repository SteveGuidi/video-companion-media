-- Scale.bas
--
-- Demonstrates the music capability of "Basic Programming" for the Atari
-- 2600.  Repeatedly plays a scale of eight notes.
--
-- Space characters between keywords and expressions are not required and
-- have been introduced for clarity.

1	Note←0
2	Note←Note+1
3	Goto 2


-- Modified program to avoid lost notes when 99 increments to 0

1	Note←0
2	Note←Note+1 Mod8
3	Goto 2

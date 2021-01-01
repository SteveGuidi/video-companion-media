-- SkipCount.bas
--
-- Demonstrates the text output memory usage of "Basic Programming" for
-- the Atari 2600.  Open the STATUS, STACK, and VARIABLE sections. Close
-- the PROGRAM section then use STEP to execute the program one statement
-- at a time.  Observe the SYMBOL usage in relation to what is printed on
-- the screen.
--
-- Space characters between keywords and expressions are not required and
-- have been introduced for clarity.

1	A←A+1
2	If A Mod2=0 Then B←B+1
3	If B Mod3=0 Then C←C+1
4	Goto 1

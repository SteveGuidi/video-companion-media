-- AtariClock.bas
--
-- Implements a clock-like program for the Atari 2600 "Basic Programming"
-- cartridge program.  Source code adapted from similar program in the
-- "Basic Programming" user manual, and modified to rendering hours,
-- minutes, and seconds.
--
-- Designed as an excercise in counting bytes and optimizing code,
-- accomodating the memory limit of the "Basic Programming" environment.
-- Each revision below improves on its precessor.
--
-- Explicit SPACE characters between keywords and expressions are shown
-- for program clarity and must be removed from program entry.

1	S←S+1 Mod60
2	If S=0 Then M←M+1 Mod60
3	If S=0 Then If M=0 Then H←H+1 Mod24
4	Clear Print H,M,S
5	Goto 1


-- Remove line 4 as it consumes 6-9 SYMBOLS.  This is redundant screen
-- output since the variables are tracked in teh VARIABLES section of
-- the screen.

1	S←S+1 Mod60
2	If S=0 Then M←M+1 Mod60
3	If S=0 Then If M=0 Then H←H+1 Mod24
4	Goto 1


-- What about initializing the clock to a specific time?
-- Add a new line 1 with the initialization, and modify the Goto statement
-- on line 5.  Result: insufficient SYMBOLS executing line 2.

1	H←15 M←58	
2	S←S+1 Mod60
3	If S=0 Then M←M+1 Mod60
4	If S=0 Then If M=0 Then H←H+1 Mod24
5	Goto 2


-- A temporary solution is to take advantage of the state of the interpreter.
-- Clear memory, STEP through line 1 until the H and M variables are
-- initialized, then erase the contents of line 1 (keeping the line number).

1	
2	S←S+1 Mod60
3	If S=0 Then M←M+1 Mod60
4	If S=0 Then If M=0 Then H←H+1 Mod24
5	Goto 2


-- Better solution is to collapse the IF statement from line 4 into line 3,
-- saving 7 SYMBOLS and resulting in faster execution.

1	H←15 M←58
2	S←S+1 Mod60
3	If S=0 Then M←M+1 Mod60 If M=0 Then H←H+1 Mod24
4	Goto 2

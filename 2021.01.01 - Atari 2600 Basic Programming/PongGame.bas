-- PongGame.bas
--
-- Demonstrates the graphics output of "Basic Programming" for the Atari 2600.
-- Source code transcribed from "Basic Programming" user manual.
--
-- To enter, it is advised to disable all screen sections but PROGRAM.
-- Furthermore, the final line will not be visible when entered due to it
-- wrapping off of the screen.  You will need to remember the order of
-- color transitions when switching modes to enter the given SYMBOLS, and
-- to switch to WHITE mode for execution when completed.
--
-- Space characters between keywords and expressions are not required and
-- have been introduced for clarity.

1	Hor2←Hor2+Key
2	If Ver1>90 Then Ver1←88
3	If Hit Then Ver1←9
4	Ver1←Ver1 + If Ver1 Mod2 Then 8 Else 92
5	Hor1←Hor1+7
6	Goto 1

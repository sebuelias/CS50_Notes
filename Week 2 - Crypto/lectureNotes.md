# CS50 Week 2 Lecture

## Debugging
There are different ways to debug code. The first is to analyze the error(s) Clang throws at you and try to make sense of what it's saying. If it's code you're familiar with, this way might work — you'll know if you're missing a certain library or have incorrect syntax.

The CS50.io virtual IDE has a help50 commmand to send your program to the CS50 staff, though this should be used sparingly. It also has a debug50 command, which is a graphical interface that you can select for certain lines of code. Debug50 works when the program works logically, but it doesn't have your intended outcome.

The final method of debugging is known as Rubber Duck Debugging, which is manually going through the code, almost reading it aloud line-by-line, to see if it makes any sense. This works best for code that's syntactically correct, but logically *incorrect*. Some examples include printing 0 as a negative integer, when you didn't want that, or printing an *extra* line in a for loop.


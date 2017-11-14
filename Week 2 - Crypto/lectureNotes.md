# CS50 Week 2 Lecture

## Debugging
There are different ways to debug code. The first is to analyze the error(s) Clang throws at you and try to make sense of what it's saying. If it's code you're familiar with, this way might work — you'll know if you're missing a certain library or have incorrect syntax.

The CS50.io virtual IDE has a help50 commmand to send your program to the CS50 staff, though this should be used sparingly. It also has a debug50 command, which is a graphical interface that you can select for certain lines of code. Debug50 works when the program works logically, but it doesn't have your intended outcome.

The final method of debugging is known as Rubber Duck Debugging, which is manually going through the code, almost reading it aloud line-by-line, to see if it makes any sense. This works best for code that's syntactically correct, but logically *incorrect*. Some examples include printing 0 as a negative integer, when you didn't want that, or printing an *extra* line in a for loop.


## Cryptography
Cryptography has to do with encrypting and decrypting messages/data. Encryption takes a plaintext message (the input) and uses a key to convert the message into ciphertext, which is coded. They key is known only between the sender and the recipient, so if an outsider finds the encrypted message, he won't know what it means. A key is needed to encode and decode messages.

## Strings
A string can be any input of characters in between double-quotes. Strings can be as short as a word, or theoretically as long as a book. It's possible for strings to be **TOO LONG**, though the amount of bytes needed isn't known until the user types the string, and a too long string can return errors in a program.

Strings can be manipulated character-by-character, and one way of doing this is with the strlen(*string variable*) built-in function. If you use this in a loop you can print out every character in that string.  
However, you can make this process more efficient. What's normally done in a for loop is the length of the counter is set to the string length, strlen in this case, but strlen counts every character of the string every time it's used. So for every iteration of the loop, every character in the string is counted. A better method is to assign strlen to a variable, and use that variable as the loop length.


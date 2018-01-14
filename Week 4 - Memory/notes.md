# CS50 Week 4 - Memory

## Values in Memory
When accessing values, the program doesn't look for the value itself but instead where it's stored in memory. If you're comparing two of the exact same strings, but they're assigned to different variables, C is looking for their location in memory. This location is called the address, and because the variables are different the address is also different — C stores them in different parts of the memory. That's why you can't directly compare string a to string b.

To get around this, the addresses are compared. Now C looks at the value stored in Address A and compares it to the value stored in Address B, and this works as it should. 

## Strings and Characters
In the previous CS50 lessons, the *string* data type was used with the cs50 library, but in reality there aren't any strings in C. A string is a set of char data types ending with terminal character *\0*. The cs50 library and string data type were implemented in earlier lessons for ease of use.

## Memory Address *

## Pointers

## Overflow

## Images and Hexidecimal

## Printing to files and Structs
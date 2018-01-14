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
Two of the most common image file types are bitmaps and jpegs. Bitmap means a map of all the bits, i.e. it maps a bit to a particular location and displays a particular pixel.

JPEGs typically start with the same 3 bytes(255 216 255), but in hexidecimal form. Instead of using a bunch of bits to figure out the color of the pixel, each byte is divided into 4 bits, and those 4 bits have a max value of 16. Instead of using 0s and 1s to represent that 16, 0-9 and a-f are  used.

## Printing to files and Structs
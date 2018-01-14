# CS50 Week 4 - Memory

## Values in Memory
When accessing values, the program doesn't look for the value itself but instead where it's stored in memory. If you're comparing two of the exact same strings, but they're assigned to different variables, C is looking for their location in memory. This location is called the address, and because the variables are different the address is also different — C stores them in different parts of the memory. That's why you can't directly compare string a to string b.

To get around this, the addresses are compared. Now C looks at the value stored in Address A and compares it to the value stored in Address B, and this works as it should. 

## Memory Address *
To lookup the memory address, the asterisk(*) is used before the variable name. Now values within addresses can be properly compared. This * just represents the location of the value in memory. 

### Memory Syntax

### Strings and Characters
In the previous CS50 lessons, the *string* data type was used with the cs50 library, but in reality there aren't any strings in C. A string is a set of char data types ending with sentinel character *\0*. The cs50 library and string data type were implemented in earlier lessons for ease of use.

A string in C is really a char * (*variable*), which is the memory address of the first character ending with a sentinel character. 


### Pointers
When going under the hood and accessing memory, you can't just assign values to data types as was done in previous lesson. Now memory has to be allocated, the * needs to point to a location in memory before a value can be assigned. This is done with **malloc()** method, which allocates memory based on the parameter (*which can be a constant number or the number of bytes in an integer or other data type*). 

If memory isn't properly allocated, the program can cause memory leaks, which has happened with real-world applications. During a memory leak, that amount of memory is "gone" unless it's released, which is done by rebooting your computer, or by running the free() method if a leak is detected.

## Overflow
Memory is made up of different sections, but the two covered in this lesson are Stack and Heap.  
Stack is where the functions (including Main) are stored. Stack goes up and disposes of memory.  
Heap is the section above Stack, it moves downward and allocates memory.

Because of their location and their movement towards each other, they can collide, and this collision is known as an Overflow.  
A Stack Overflow is too much of the Stack being used, and a Heap Overflow is too much of the Heap in use.  
But a Buffer Overflow refers to any overflow between any sections in memory.

## Images and Hexidecimal
Two of the most common image file types are bitmaps and jpegs. Bitmap means a map of all the bits, i.e. it maps a bit to a particular location and displays a particular pixel.

JPEGs typically start with the same 3 bytes(255 216 255), but in hexidecimal form. Instead of using a bunch of bits to figure out the color of the pixel, each byte is divided into 4 bits, and those 4 bits have a max value of 16. Instead of using 0s and 1s to represent that 16, 0-9 and a-f are  used.

## Printing to files and Structs
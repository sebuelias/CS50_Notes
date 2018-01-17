# In Depth Notes about Memory

## Hexadecimal
Decimal numbers 0-9 are known as base-10, these are the numbers we see all the time with ones, tens, hundreds...etc places we're used to. Binary numbers are base-2, 0s and 1s, and they go from right to left from 0,1,2,4,16,32...etc. Computers deal with binary.

Hexadecimal is base-16. These numbers go from 0-9 and A-F, with A-F representing 10-15. Each hexadecimal number represents 4 bits, and you'll notice that the largest value F(15) equals 1111, which is also the highest 4-bit value. **0x** is prefixed in front of a hexadecimal numbers to avoid confusion.

To find the ones/tens/hundreds/etc of hexadecimal, the power of 16 is used

* 16^0 is the ones place
* 16^1 is the tens place
* 16^2 is the hundreds place
* ...and so forth

Here's the formula to find the value of a hexadecimal number

* **0xADC**
* (A, which is 10 x 16^2) + (D, which is 13 x 16^1) + (C, which is 12 x 16^0)
* (10 x 256) + (13 x 16) + (12 x 1)
* 2560 + 208 + 12 = 2780

It's also possible to convert binary to hexadecimal  
 
The number is grouped into 4-bit chunks, from right to left, with any applicable 0s added to digits at the very left. This particular example happens to be 32-bits, so adding 0s isn't necessary (but note the 0 at the beginning that was originally there).

After the grouping, find the hexadecimal value of each group. Prefix that number with 0x and that's the hexadecimal number


* **01000110101000101011100100111101**
* **0110 0110 1010 0010 1011 1001 0011 1101**
* **4 6 A(10) 2 B(11) 9 3 D(13)**
* **0x46A2B93D**

Memory addresses are represented as hexadecimal numbers. I've also noticed that Assembly uses hexadecimal.


## Pointers
Pointers are an alternative way to pass data between functions. They're based by the actual variable instead of a copy. When int a = int b, a gets a copy of the b variable, but int *a = int *b, *a gets the actual data of *b.

Data is stored on a hard disk (or solid-state-drive), but nothing can be done with this data. It needs to be moved into memory (RAM, Random Access Memory) to make it usable. Any data on memory is temporary, it's gone if the program free()'s it or the machine shuts down. Memory is finite, and whenever a data type is declared some memory is used. Memory acts similar to an array, meaning it's indexed and can be accessed, but any location (address) on memory can be independently accessed. This is known as Random Access.

These addresses have hexadecimal locations, and each pointer is just an address(pointers are declared with the *). To access a pointer, the & is used. The pointer value is the memory address, and the type is the data at the address. These pointers allow us to manipulate real data instead of the copies, which is what we did in previous lessons.

All pointers should be set to something, and if a pointer can't immediately be set to anything it should be set to NULL. This is important because a pointer set to NULL throws a Segmentation Fault when dereferenced, which defends against accidental manipulation. Dereferencing is changing the actual memory data.

In past lessons we saw how to initialize multiple variables on the same line with int a, b, c...etc; To do this with a pointer, the syntax is int *a *b, *c, *d...etc.
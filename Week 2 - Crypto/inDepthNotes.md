# In Depth Notes about Functions, Scope, and Arrays

## Functions
Functions are known under a variety of names including methods, procedures, or subroutines, but they all refer to the same thing. I'm more familiar with method, which I've seen in JavaScript, because a method is a function that's part of an object. That tangent will explain why I might sometimes use the term "method" in my notes.

A function is a process of one more inputs to create a single output. They're used to organize code and make code reusable. Instead of having a specific commands repeated over-and-over, put them inside of a function. In C, the function needs to be declared above main *value-type Function Name (arguments)*. The value type is also known as a return type, and it's what kind of data a function returns. Int main returns an integer, typically 0 as covered in the [previous notes](https://github.com/00SaadChaudhry/CS50_Notes/blob/master/Week%202%20-%20Crypto/lectureNotes.md#int-main-program).

The content of the function, all the instructions, are what's known as a function definition. A function that gets a return type needs to have a value input during a function call, but not all functions needs return types such as functions created with void instead.

## Variables and Scope
Scope defines which functions can accept which variables. There are two kinds of scope, global and local. Global scope variables are seen **EVERYWHERE** in the program and thus can be altered by any function. Local variables are placed within functions and can also be seen by that function as well as anything within that function's block.

Local variables are passed by value, so the *callee*(function receiving input), receives its own copy of the value. Whereas with global it's a reference to that value.

It's best practice to use as little global variables as possible since programmers tend to come up with similar names and if something inadvertently alters a global value that can ruin the entire program.

## Arrays
Arrays hold values of the same value type, so it can be array of strings, floats, or integers, but nothing mixed together. The array elements, its contents, are partitioned into small identically spaced blocks. Each array element is accessed by an index number, with the first number being 0. It's possible to go over the length of an array, having arr[5] for an array with a length of 5 (instead of arr[4]), but it will cause problems. 

Arrays can't just be assigned into other variables they need to manually filled in. This can be done with a loop. However, the individual array elements can be treated the same as variables.

Since arrays can't be copied, they're passed by reference, so any changes made to an array's element affects the array.
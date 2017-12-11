# CS50 Week 3 - Algorithms

## Main Lecture
Normally I have separate entries for the main lecture and the shorts, but the lecture and short videos flow together. The topics covered in the lecture are gone into more depth in the shorts.

This lecture was more theoretical than anything, barely anything programming related was done. Yes, there's plenty of pseudocode, but ultimately it's about understanding algorithms and how they're applied to programming.

An algorithm is a set of instructions, some are more complex than others and the more complex ones can take longer to complete. When it comes to small data-sets, a complex algorithm can greatly reduce runtime. But for something that contains millions or billions or even greater amounts of data, the differences aren't as noticeable.

* Linear search
* Binary search
* Selection Sort
* Bubble Sort
* Insertion Sort
* Merge Sort

These algorithms have pros and cons. Some are faster, some more complex, etc. They each also have a worst-case and best-case scenario, this is respectively known as **Big O Notation** O(variable) and **Big Omega Notation** Ω(variable) in computer science. 

* O/Ω(1), which is constant resources used no matter the data-set size
* O/Ω(log n), moves at the logarithmic value of the variable
* O/Ω(n), moves at the rate of the variable
* O/Ω(n log n), moves at the variable times it's logarithmic value
* O/Ω(n^2), moves at the variable times itself

It's possible to go n^3 and so forth, if the algorithm is truly that complicated, but that's something rarely used. In a realistic setting, a notation less than O/Ω(n) occurs since it's saying the algorithm is complete at a rate less than it's variable value. You'll see O/Ω(1) when the same value is printed out, no matter the variable; and O/Ω(log n) is used in binary search since the n value always decreases by half.

## Computational Complexity


# Sorting Algorithm Summary

## Bubble Sort

### Summary
It goes index-by-index through the entire array. It compares the indices in pairs: **A** and **B**, **B** and **C**, **C** and **D**, and so forth as it goes through the array.  
If the value in **A** is greater than the value in **B**, **A** moves one position to the right. Now it gets compared to the value in **C**. If it's greater than **C**, it moves to the right again, or if it's less it stays in position.  
Now **C** gets compared to **D** and so forth.  
This happens until the largest value in the array gets pushed to the end. The process is repeated, with the last index(+1 after the first time) being ignored each time (*since it's sorted out*), until it's sorted.

### Steps

*A counter, starting at a value other than 0, runs during the sort. It sets itself to 0 at the beginning of each loop iteration. If an index moves forward one position, the counter increments by 1.*  
*This counter lets us know when the bubble sort algorithm should stop running. The algorithm ends when the counter value is 0 at the end of the loop. That means no index changed position, which means the array is sorted*

1. Move through array, index-pair by index-pair.
2. If the left index is of a greater value than the right index, move the left index one position forward. 
3. But if the left index is of a lesser value, it stays in place.
4. Now the current right index is compared with the index to its right.
5. Repeat steps **2** and **3** for this pair.
6. Repeat step **4**.
7. The process is repeated until the largest value moves to end of the array. This value now bubbles out of the array.
8. All steps are repeated until each value is bubbled out. Array should now be sorted from smallest to greatest.

### Pseudocode 
    counter = -1
    for loop through array
    	counter = 0  
    	if index[i] > index[i+1]  
			index[i] = index[i] + 1
			counter++
			

## Selection Sort

### Summary

### Steps

### Pseudocode 
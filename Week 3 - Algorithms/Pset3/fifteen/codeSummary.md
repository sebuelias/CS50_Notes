# Algorithm Summary

## init()

### Summary
Initialize the **Game of Fifteen** board, basically create the game board which is a 4x4 grid. This can be done by making a 2-Dimensional array, that is an array with with rows and columns, also known as a **matrix**.

It's shown as *Array*[x][y], so an int grid[4][4], will have 4 *[x]* index rows across [*y* 0], [*y* 1], [*y* 2], and [*y* 3] times. This works similar to a nested loop, and actually needs that kind of loop to populate the grid.

For **Game of Fifteen**, every index will contain an integer except for grid[3][3], which will contain no value. This is the *blank space* for the game. The pieces are in descending order, so the loop needs to decrement from 15 to 1. The blank space, [3][3] is excluded from the loop during initialization.

Another thing to consider is the 1 and 2 tile positions need to be swapped for an even-dimensioned grid, it should be **3**, **1**, **2** instead, so the game can be won. 

### Steps

### Pseudocode


## draw()

### Summary

### Steps

### Pseudocode


## move()

### Summary

### Steps

### Pseudocode


## won()

### Summary

### Steps

### Pseudocode
# Algorithm Summary

## init()

### Summary
Initialize the **Game of Fifteen** board, basically create the game board which is a 3x3 grid. This can be done by making a 2-Dimensional array, that is an array with with rows and columns, also known as a **matrix**.

It's shown as *Array*[x][y], so an int grid[3][3], will have 3 *[x]* index rows across [*y* 0], [*y* 1], and [*y* 2] times. In this example it will be done 3 by 3 times. This works similar to a nested loop, and actually needs that kind of loop to populate the grid.

For **Game of Fifteen**, which has 16 indices [4][4], every index will contain an integer except for grid[2][2], which will contain no value. This is the *blank space* for the game. The pieces are in descending order, so the loop needs to decrement from 15 to 1. The blank space, [2][2] is excluded from the loop during initialization.

Another thing to consider is the 1 and 2 tile positions need to be swapped for a grid with an even number dimensions, it should be **3**, **1**, **2** instead. 

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
# Game of Fifteen Pseudocode

## init()

    //find highest piece number by squaring user input and subtracting 1
    piece = (d * d) - 1
    for i = 0 i < d i++
        for j = 0 j < d j++
	        piece-- //decrements so board can fill from large to small
	        if d % 2 == 0 //only do this for an even value
	        	//swap positions of the penultimate tiles, 1 and 2
	            swap = board[d-1][d-1]
	            board[d-1][d-1] = board[d-1][d-2]
	            board[d-1][d-2] = swap

## draw()

    for i = 0 i < d i++
        for j = 0 j < d j++
        	if board[i][j] > 0
	        	printf board[i][j] //init() pieces are printed
	        	if board[i][j] == 0
	        		printf '_'


## move()


## won()


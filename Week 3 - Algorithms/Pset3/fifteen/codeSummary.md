# Game of Fifteen Pseudocode

## init()
	
	tile = (d * d) - 1
	for i = 0; i < d; i ++
		for j = 0; j < d; j++
		board[i][j] tile--
		if d % 2 == 0
			board[d-1][d-2] == 2
			board[d-1][d-3] == 1


## draw()

	for int i = 0; i < d; i++
		for int i = 0; i < d; i++
			if board[i][j] > 0
				printf "%2i", board[i][j]
			if board[i][j] == 0
				printf "_"
		printf "\n"



## move(int tile)

	for int i = 0; i < d; i++
		for int j = 0; j < d; j++
			if (tile == board[i][j])
				int a = i
				int b = j
				if (
				board[i+1][j] == 0 ||
				board[i-1][j] == 0 ||
				board[i][j+1] == 0 ||
				board[i][j-1] == 0
				)
					board[i][j] = 0
					0 tile = board[a][b]
					board[a][b] = tile
					return true
	return false


## won()


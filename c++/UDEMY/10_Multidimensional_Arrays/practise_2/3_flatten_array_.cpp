/* 
Practice: Flatten array

Let Say we have matrix of ROWS x COLS
    ~> 1D here: 8 16 9 52 3 15 27 6 14 25 2 10
To convert from (i, j) in matrix to 1D array
    ~> i * COLS + j
    ~> (1, 2) ⇒ 1 * 4 + 2 = 6
To convert from index in 1D array to (i, j) in matrix
    ~> i = idx/COLS, j = idx%COLS
    ~> Idx = 6 ⇒ (6/4, 6%4) = (1, 2)
    ~> Why? Idx = i * COLS + j
        ■ Idx / COLS = (i * COLS + j)/COLS = i + 0, as j < COLS
        ■ Idx % COLS = (i * COLS + j)%COLS = 0 + j, as j < COLS and (i*COLS)%COLS = 0
*/
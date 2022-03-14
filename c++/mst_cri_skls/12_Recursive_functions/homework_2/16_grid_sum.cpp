/*
     Homework 16: Grid Sum

    ● Given a 2D array of numbers, all of them are positive distinct. Robot start from
    (0, 0). It can move to the right or left or diagonal. It will select one direction:
    the maximum. Print the total path sum of this robot
        ○ int path_sum(int grid[100][100], int row, int col, int ROWS, int COLS)
    ● Input
        ○ 3 3
        ○ 1 7 8
        ○ 2 10 11
        ○ 20 5 9
    ● Output: 31 (from 1 + 10 + 11 + 9)
        ○ Robot start at (0, 0). 3 possible values (2, 7, 10).
        Max 10, so go to this cell
        ○ Then 3 possible values (5, 9, 11). Go to 11. Then only 9 available
*/

#include <iostream>
using namespace std;

int di[3] = {1,0,1};
int dj[3] = {0,1,1};

int path_sum(int grid[100][100], int ROWS, int COLS, int row = 0, int col = 0) {
    int sum = grid[row][col];
    if (row == ROWS-1 && col == COLS-1)  // not just ROWS it is ROWS -1
        return sum;
    int max_val = -1000000, max_idx = -1;

    int new_row, new_col;
    for (int d = 0; d < 3; ++d) {
        new_row = row + di[d];
        new_col = col + dj[d];

        if (new_row >= ROWS || new_col >= COLS)
            continue;
        if (grid[new_row][new_col] > max_val) 
            max_val = grid[new_row][new_col], max_idx = d;
    }
    new_row = row + di[max_idx];
    new_col = col + dj[max_idx];

    return sum + path_sum(grid, ROWS, COLS, new_row, new_col);
}

int main() {
    int grid[100][100], r, c;
    cin >> r >> c;
    for (int i = 0; i < r; ++i) {
        for (int j =0 ; j < c ; ++j) {
            cin >> grid[i][j];
        }
    }
    cout << path_sum(grid, r, c) << "\n";
    return 0;
}

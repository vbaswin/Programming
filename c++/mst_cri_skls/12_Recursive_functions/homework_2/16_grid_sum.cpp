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

int path(int grid[100][100], int row, int col, int ROWS, int COLS) {
    if (row == ROWS && col == COLS)
        return 0;
    if (col <= COLS && grid[row][col] > grid[row][col+1]) {
        int sum = grid[row]




        path(grid, row, col+1, ROWS, COLS);
    }
}
int main() {

}



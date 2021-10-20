/* 
Practice: Special print

Read 2 integers for the rows and columns of a matrix ( <= 100). 
Then read rows x cols integer value.
Print the following 4 values
    ~> The sum of the left diagonal & The sum of the right diagonal
    ~> The sum of the last row & The sum of the last column

Input: 
3 4
8 16 9 52
3 15 27 6
14 25 2 10
Output
    25 104
    51 68 
*/

#include <iostream>
using namespace std;

int main() {
    int row, col, arr[100][100];
    cin >> row >> col;

    int left_dia = 0, right_dia = 0, last_row = 0, last_col = 0;
    for (int i = 0; i < row; ++i) {
        for(int j = 0; j < col; ++j) {
            cin >> arr[i][j];

            if (i == j)
                left_dia += arr[i][j];
            if (i == row - 1)
                last_row += arr[i][j];
            if (j == col - 1)
                last_col += arr[i][j];
        }
    }
    int i = 0, j = col -1;
    while (i < row && j >= 0)
        right_dia += arr[i++][j--];

    cout << "\n" << left_dia << " " << right_dia << "\n" << last_row << " "
        << last_col << "\n";
    return 0;
}
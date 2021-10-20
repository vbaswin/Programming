#include <iostream>
using namespace std;

int main() {
    int row, col, arr[100][100];
    cin >> row >> col;

    for (int i = 0; i < row; i++) 
        for (int j = 0; j < col; j++)
            cin >> arr[i][j];

    int left_dia = 0, right_dia = 0, last_row = 0, last_col = 0;
    int i = 0, j = 0;
    while (i < row && j < col)
        left_dia += arr[i++][j++];
        
    i = 0, j = col -1;
    while (i < row && j >= 0)
        right_dia += arr[i++][j--];

    j = 0;
    while (j < col) 
        last_row += arr[row - 1][j++];

    i = 0;
    while (i < row)
        last_col += arr[i++][j = col -1];

    cout << "\n" << left_dia << " " << right_dia <<
        "\n" << last_row << " " << last_col << "\n";
    return 0; 
}
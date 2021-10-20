/* 
Practice: Swap 2 columns

Read integers N, M, then Read matrix NxM. Then read 2 indices of columns.
Swap the 2 columns together. Print the new matrix.

Input: 3 4
    8 16 9 52
    3 15 27 6
    14 25 2 10
    0 3
Output
    52 16 9 8
    6 15 27 3
    10 25 2 14
*/

#include <iostream>
using namespace std;

int main() {
    int row, col, arr[100][100];
    cin >> row >> col;

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> arr[i][j];
        }
    }

    int col1, col2;
    cin >> col1 >> col2;

    for (int i = 0; i < row; i++) {
        int tmp = arr[i][col1];
        arr[i][col1] = arr[i][col2];
        arr[i][col2] = tmp;
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
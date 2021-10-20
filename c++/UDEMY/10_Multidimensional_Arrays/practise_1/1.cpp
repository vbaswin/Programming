/*
Practice: Max value

Read 2 integers for the rows and columns of a matrix ( <= 100). Then read
rows x cols integer value. Find the position of maximum value in the array.
If there are several ones, find the last occurance
Input:
    3 4
    1 5 1 10
    2 10 3 4
    1 10 10 7
Output
    Max value at position 2 2 with value = 10  
*/

#include <iostream>
using namespace std;

int main() {
    int row, col, arr[100][100];
    cin >> row >> col;

    int max_value = -10000, r, c;
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            cin >> arr[i][j];
            if (arr[i][j] >= max_value) {
                max_value = arr[i][j];
                r = i; c = j;
            }
        }
    }

    cout << "Max value at position " << r << " " << c << " with value = "
        << max_value << "\n";
    return 0;
}
/*
Practice: Greedy Robot

Read integers N, M, then Read matrix NxM. All values are distinct.
A robot starts at cell (0, 0).
Take the value in the current cell and moves.
It can move only one step to either: Right, Bottom or the diagonal.
It always selects the cell that has maximum value.
Print the sum of values the robot collects
*/

#include <iostream>
using namespace std; 

int main() {
    int row, col, arr[100][100];
    cin >> row >> col;

    for (int i = 0; i < row; i++) 
        for (int j = 0; j < col; j++) 
            cin >> arr[i][j];
        
    int i = 0, j = 0, sum = 0;
    while (i < row && j < col) {
        sum += arr[i][j];

        int max_val, cur_i = -1, cur_j = -1;
        // checking right
        if (j + 1 < col) 
            max_val = arr[i][j + 1], cur_i = i, cur_j = j + 1;

        // checking bottom
        if (i + 1 < col) {
            if (cur_i == -1 || max_val < arr[i + 1][j])
                max_val = arr[i+1][j], cur_i = i + 1, cur_j = j;
        }

        // checking diagonal
        if (i + 1 < row && j + 1 < col) {
            if (cur_i == -1 || max_val < arr[i + 1][j + 1])
                max_val = arr[i+1][j+1], cur_i = i+1, cur_j = j+1;
        }
        
        if (i == -1)
            break; // if no condition is satisfied
        i = cur_i, j = cur_j;
    }
    cout << sum << "\n";
    return 0;
}

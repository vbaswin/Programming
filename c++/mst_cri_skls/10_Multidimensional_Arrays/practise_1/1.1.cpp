/* 
Using   >= finds last occurence
        > finds first occurence
*/

#include <iostream>
using namespace std;

int main() {
    int row, col, arr[100][100];
    cin >> row >> col;

    int max_r = 0, max_c = 0;
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            cin >> arr[i][j];
            if (arr[i][j] >= arr[max_r][max_c]) {
                max_r = i; max_c = j; // just to reduce some 
            }   // steps thats all not anything new
        }
    }

    cout << "Max value at position " << max_r << " " << max_c << " with value = "
        << arr[max_r][max_c] << "\n";
    return 0;
}
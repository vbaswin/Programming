/* 
FLATTEN AN ARRAY
 
convert to 1D array - just put values from rows in order

find a simple formula for:- 
1) if we have position(i, j) in 2D array, what is index in 1D array?
2) if we have index in 1D array, what is the position (i, j) in 2D 
    array?
 */

#include <iostream>
using namespace std;

int main() {
    int idx = 0;
    for (int row = 0; row < 3; ++row) {
        for (int col = 0; col < 4; ++col) {
            idx = row * 3 + col + row + 1;
            cout << "index" << idx << " has r,c = " << row + 1 << col + 1<< "\n";
            ++idx;
        }
    }
}


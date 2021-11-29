/********************* 
Let's read then print!
*********************/

#include <iostream>
using namespace std;

int main() {
    double grades[2][3] = {0};

    for (int row = 0; row < 2; ++row) {
        for (int col = 0;  col < 3; ++col)
            cin >> grades[row][col];
    }

    for (int col = 0; col < 3; ++col) {
        cout << "Col"<< col << ": ";
        for (int row = 0; row < 2; ++row) {
            cout << grades[row][col] << " ";
        }
        cout << "\n";
    }
    return 0;
}


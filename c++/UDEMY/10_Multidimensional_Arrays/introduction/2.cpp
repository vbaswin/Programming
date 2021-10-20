/********************* 
Let's read then print!
*********************/

#include <iostream>
using namespace std;

int main() {
    double grades[7][6] = {0};

    for (int row = 0; row < 7; ++row) {
        for (int col = 0;  col < 6; ++col)
            cin >> grades[row][col];
    }

    for (int row = 0; row < 7; ++row) {
        cout << "Row" << row << ": ";
        for (int col = 0; col < 6; ++col) {
            cout << grades[row][col] << " ";
        }
        cout << "\n";
    }
    return 0;
}

/* 
>>==>>ROW-COLUMN method keeping row constant changing column
>>==>>COLUMN-ROW method keeping col constant changing row

This is ROW-COLUMN order if we read the column first it becomes
COLUMN-ROW order but it is slower due to many memory jumps and 
it depends on the hardware of your machine 
*/

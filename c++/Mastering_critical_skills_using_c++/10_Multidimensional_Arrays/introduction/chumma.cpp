/********* 
quiz no 7
*********/

// something wrong in this check out if you can 

#include <iostream>
using namespace std;

int main() {
    int row, col;
    cin >> row >> col; // not forget row and col are 0-based as
// we are finding the index of particular positions only and not
// the total index
    int idx = row * 3 + col + row + 1;;
    cout << idx << "\n";
    return 0;
}
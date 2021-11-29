/******************************************************************
Read an integer N, then read N <= 200 integers. For all the digits 
from 0 to 9, we want to know whow many times appeared.

input : 2 78 307
output: 
0 1
1 0
2 0
3 1
4 0
5 0 
6 0
7 2
8 1
9 0
*********************************************************************/

#include <iostream>
using namespace std;

int main() {
    int n, num, numbers[10] {0};
    cin >> n;

    for (;n;--n) {
        cin >> num;
        int last_digit;
        for (; num > 0; num /= 10) {
            last_digit = num % 10 ;
            numbers[last_digit]++;
        }

    }
    for (int i = 0; i < 10; ++i) {
        cout << i << " " << numbers[i] << endl;
    }

    return 0;
}
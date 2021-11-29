/* 
Problem #2: Triangular matrix

Read integer N, then Read Square matrix NxN. Then, print 2 values. The
sum of the lower triangle matrix and the upper triangle.

Input
    3
    8 16 9
    3 15 27
    14 25 29
Output
    94  (8+15+29+3+25+14)
    104 (8+15+29+16+27+9)
 */

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int upper = 0, lower = 0, val;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> val;

            if (i <= j) // all the values of upper tri including diagonal 
                upper += val;
            if (i >= j)
                lower += val;
        }
    }

    cout << lower << " " << upper << "\n";
    return 0;
}
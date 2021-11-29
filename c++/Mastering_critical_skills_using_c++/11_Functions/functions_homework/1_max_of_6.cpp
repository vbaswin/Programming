/* 
Homework 1: Max of 6 numbers

Write a function that reads 6 numbers and compute their maximum. Create
the following functions
    max(int a, int b, int c)
    max(int a, int b, int c, int d)
    max(int a, int b, int c, int d, int e)
    max(int a, int b, int c, int d, int e, int f)
How can
    max(int a, int b, int c, int d) utilize max(int a, int b, int c) ? 
    and so on

This is more of a educational question than actually a problem to 
make us familiarise on functions and max
*/

#include <iostream>
using namespace std;

int maxm;
int max(int a, int b, int c) {
   return max (a, max(b, c)); 
}
/* notice in first max you can only input 2 variables but in 2nd max
inside the 1st max you can add many variables */

int max(int a, int b, int c, int d) {
    return max (a, max(b, c, d));
}

int max(int a, int b, int c, int d, int e) {
    return max (a, max(b, c, d, e));
}

int max(int a, int b, int c, int d, int e, int f) {
    return max (a, max(b, c, d, e, f));
}

int main() {
    cout << max(1, 2, 3, 4, 5) << "\n";
    return 0;
}
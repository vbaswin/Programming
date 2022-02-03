/*
     Homework 1: Length of 3n+1

    ● Implement 3n+1 function to compute the length of the sequence
    ● int length_3n_plus_1(int n)
    ● E.g. length_3n_plus_1(6) ⇒ 9
*/

#include <iostream>
using namespace std;

int cnt = 0;

void length_3n_plus_1(int n) {
    ++cnt;
    if (n == 1) {
        cout << cnt << "\n";
        return;
    }
    if (n % 2 == 0)
        length_3n_plus_1(n / 2);
    else 
        length_3n_plus_1(3 * n + 1);
}

int main() {
    int n;
    cin >> n;
    length_3n_plus_1(n);
    return 0;
}

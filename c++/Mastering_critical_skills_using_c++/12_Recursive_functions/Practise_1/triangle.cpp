/*
 Print an inverted triangle using recursive functions
*/

#include <iostream>
using namespace std;

void triangle(int n) {
    if (n == 0)
        return;

    for (int i = 0; i < n; ++i)
        cout << "*";
    cout << "\n";
    triangle(n - 1);
}

int main() {
    int n;
    cin >> n;
    triangle(n);
    return 0;
}

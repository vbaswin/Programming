/*
 Print a straight triangle using function recursion
*/

#include <iostream>
using namespace std;

void triangle(int n) {
    if (n == 0)
        return;
    triangle(n - 1); // you can print only after all the function call ie
                     // first in last out principle :)
    for (int i = 0; i < n; ++i)
        cout << "*";
    cout << "\n";
}

int main() {
    int n;
    cin >> n;
    triangle(n);
    return 0;
}

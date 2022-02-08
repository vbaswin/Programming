/* 
convert the number to absolute */

#include <iostream>
using namespace std;

int our_abs(int n) {
    if (n >= 0)
        return n;
    return -n;
}

int main() {
    int n; cin >> n;
    int output = our_abs(n);
    cout << output << "\n";
    return 0;
}
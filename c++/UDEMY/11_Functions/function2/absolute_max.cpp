/* 
Find the absolute of the input number and then compare to
find the max of them
*/

#include <iostream>
using namespace std;

int our_abs(int n) {
    if (n >= 0)
        return n;
    return -n;
}

int our_max(int a, int b) {
    int x = our_abs(a);
    int y = our_abs(b);

    if (x >= y)
        return x;
    return y;
}

int main() {
    int a, b;
    cin >> a >> b;
    int result = our_max(a, b);
    cout  << result << "\n";
    return 0;
}
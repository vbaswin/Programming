#include <iostream>
using namespace std;

// sir's simple way of showing how to do it 
int fibonacci(int n) {
    if (n == 0 || n == 1)
        return n;
    return fibonacci(n-1) + fibonacci(n-2);
}

// just a curiosity to print not just the final no but out of what
// he is teaching
int n1 = 0, n2 = 1, n3;
void fibonacci_mine(int n) {
    // static int n1 = 0, n2 =1, n3; this eliminates the above initialisation
    // as static variables can only be initialised once
    if (n < 0)
        return;
    n3 = n1 + n2;
    n1 = n2;
    n2 = n3;
    cout << n3 << " ";
    fibonacci_mine(n-1);
}

int main() {
    int n;
    cin >> n;
    cout << fibonacci(n) << "\n";
    cout << "0 1 ";
    fibonacci_mine(n-2);// as first 2 are already printed
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    const int N = 1000;
    int n, a[N]; cin >> n;

    for (int i = 0; i < n; ++i)
        cin >> a[i];

    bool plnd = true;                           // palindrome - plnd
    for (int i = 0; i <= n/2; ++i) {
        if (a[i] != a[n - 1 - i]) {
            plnd = false;
            break;
        }
    }

    if (plnd)
        cout << "YES\n"; 
    else
        cout << "NO\n";

    return 0;
}
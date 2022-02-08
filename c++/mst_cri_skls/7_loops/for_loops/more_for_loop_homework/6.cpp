#include <iostream>
using namespace std;

int main() {
    int n, a, b; cin >> n >> a >> b;

    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        int sum_digits = 0;
        for (int tmp = i; tmp ; tmp /= 10) 
            sum_digits += tmp % 10;
        
        if (a <= sum_digits && sum_digits <= b)
            sum += i;
    }
    cout << sum << "\n";

    return 0;
}
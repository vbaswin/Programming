#include <iostream>
using namespace std;

int main() {
    int N; cin >> N;

    int cnt = 1;
    for (int i = 2; i < N; ++i) {
        if (N % i != 0)
            ++cnt;
    }

    if (cnt == N - 1)
        cout << "YES" << "\n";
    else 
        cout << "NO" << "\n";

    return 0;
}
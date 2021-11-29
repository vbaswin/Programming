#include <iostream>
using namespace std;

int main() {
    int n, x, q, frequency[501];

    for (int i = 0; i < 501; ++i) {
        frequency[i] = -1;          // convert all the values to -1
    }

    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        frequency[x] = i;           // give the index value to the input
    }                               // number

    int num;
    cin >> q;
    for (; q; --q) {
        cin >> num;
        cout << frequency[num] << endl;
    }

    return 0;
}
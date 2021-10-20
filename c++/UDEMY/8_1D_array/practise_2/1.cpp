#include <iostream>
using namespace std;

int main() {
    int n, num[200]; cin >> n;

    for (int i = 0; i < n; ++i)
        cin >> num[i];

    for (int i = 0; i < n/2; ++i) {
        int temp = num[i];
        num[i] = num[n -1 - i];
        num[n - 1 - i] = temp;
    }
    

    for (int i = 0; i < n; ++i)
        cout << num[i] << " ";

    return 0;
}

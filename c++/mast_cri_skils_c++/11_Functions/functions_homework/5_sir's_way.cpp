#include <iostream>
using namespace std;

void set_powers(int arr[], int len, int m) {
    arr[0] = 1;
    
    for (int i = 1; i < len; ++i)
        arr[i] = arr[i -1] * m;
}


int main() {
    int len, m, arr[100];
    cin >> len >> m;

    set_powers(arr, len, m);

    for (int i = 0; i < len; ++i)
        cout << arr[i] << " ";
    cout << "\n";
    return 0;
}

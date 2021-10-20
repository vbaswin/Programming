#include <iostream>
using namespace std;

int main() {
    const int N = 1000;
    int n, a[N]; cin >> n;

    for (int i = 0; i < n; ++i) 
        cin >> a[i];
    
    // int temp = 0;                                        // additional step to make it inceasing order (optional) [don't forget that's why]
    // for (int i = 0; i < n; ++i) {
    //     for (int j = i + 1;j < n; ++j) {
    //         if (a[i] > a[j]) {
    //             temp = a[i]; a[i] = a[j]; a[j] = temp;
    //         }
    //     }
    // }


    int value = a[0];
    cout << a[0];
    for (int i = 1; i < n; ++i) {
        if (value != a[i]) {
            value = a[i];
            cout << " " << value;
        }
    }

    cout << "\n";
    return 0;
}
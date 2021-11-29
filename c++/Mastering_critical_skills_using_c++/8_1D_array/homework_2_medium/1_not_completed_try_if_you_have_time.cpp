#include <iostream>
using namespace std;

int main() {
    int n, a[n]; cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    if (n >= 3) {
        int temp;
        int min1 = a[0], min2 = a[1], min3 = a[2];
        
        if (min1 > min2) {
            temp = min1;
            min1 = min2; 
            min2 = temp;
        }
        if (min2 > min3) {
            temp = min2;
            min2 = min3;
            min3 = temp;
        }
        if (min1 > min3) {
            temp = min1;
            min1 = min3;
            min3 = temp;
        }

        if (n > 3) {
            for(int i = 3; i < n; ++i) {
                if (a[i] < min1 && a[i] < min2 && a[i] < min3) {
                    min3 = min2; min2 = min1; min1 = a[i];
                }
                else if (a[i] < min2 && a[i] < min3) {
                    min3 = min2; min2 = a[i];
                }
                else if (a[i] < min3)
                    min3 = a[i];
            }
        }
        cout << min1 << min2 << min3 << endl;
    }

    cout << endl;
    return 0;
}
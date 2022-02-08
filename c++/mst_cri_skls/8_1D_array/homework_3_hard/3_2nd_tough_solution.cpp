#include <iostream>
using namespace std;

int main() {
    int n, a[199];
    cin >> n;

    for (int i = 0; i < n; ++i) 
        cin >> a[i];

    int result = 0;

    // >>==>> for every index in the array we consider it as the start of a
    // subarray
    for (int i = 0; i < n; ++i) {
// adding one to result 1 with each iteration as any subarray of size 1 is
//  considered increasing;
// this subarray will include the value in index i ie; first of every start
// of iteration
        result++;
// expanding subarray which start with index i and if this subarray is 
// still increasing then we add one to our result
// otherwise we should stop expanding this subarray
        for (int j = i + 1; j < n; ++j) {
// if current value is greater than or equal the previous one
            if (a[j] >= a[j - 1]) {
                result++;
            }
            // otherwise stop
            else
                break;
        }
    }

    cout << result << endl;
    return 0;
}
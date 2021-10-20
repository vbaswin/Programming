/********************
CUMULATIVE SUM METHOD
*********************/

#include <iostream>
using namespace std;

int main() {
    const int N = 200;
    int n, k, arr[N] {0}, min_index, max_sum = -10000000; // 0-based array

    cin >> k >> n;
// here we deal with >>==>> 1-based array 
    for (int i = 1; i <= n; ++i) {
        cin >> arr[i];
// cumulative sum for the array for each iteration so we can get the sum 
// b/w 2 numbers easily: each element carries the sum of all previous elements
        arr[i] += arr[i - 1];
    }
// 1-based array
    for (int i = k; i <= n; ++i) {
        int sum = arr[i] - arr[i - k];

        if (sum > max_sum) {
            max_sum = sum;
            min_index = i - k + 1;
        }
    }
// convert 1-based back to 0-based array so extra -ve 1
    cout << min_index - 1 << " " << min_index + k - 2 << " " << max_sum << endl;
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    const int N = 200;
    int k , n, arr[N];

    cin >> k >> n;

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int max_sum = 0;
    int min_index = 0;
    for (int i = 0; i < k; ++i) {
        max_sum += arr[i];  // sum the first k values, 0-based be careful
    }

    int sum = max_sum;
    for (int i = k; i < n; ++i) {
// this is sliding window technique; the first value is removed and next
// value of the array is added thus reducing a ton of steps
        sum = sum - arr[i - k] + arr[i];    // here it is sum = sum - ...
// and not tmp = sum - ... because here the sum value will not get
// updated with each iteration
        if (max_sum < sum) {
            max_sum = sum;
            min_index = i - (k - 1); // because i is 0-based , we need k 
        }   // te be 0 based so we subtract 1 hence i -k ie; 0-based
    }   // 0-based gives a 0-based number

    cout << min_index << " " <<  min_index + k -1 << " " << max_sum << endl;
    return 0;

}
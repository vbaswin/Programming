#include <iostream>
using namespace std;

void right_max_1(int arr[], int len, int start_pos = 0) {
    if(start_pos == len -1)
        return;
    right_max_1(arr, len, start_pos +1);
    arr[start_pos] = max(arr[start_pos], arr[start_pos + 1]);
}

void right_max_2(int arr[], int len) {
    if (len == 1)
        return;
    right_max_2(arr + 1, len - 1);
    // we are shifting the array by one position ie; first element is now second
    arr[0] = max(arr[0], arr[1]);
}
int main() {
    int n, arr[20];
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    right_max_1(arr, n);

    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << "\n";
    right_max_2(arr,n);

    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << "\n";
    return 0;
}

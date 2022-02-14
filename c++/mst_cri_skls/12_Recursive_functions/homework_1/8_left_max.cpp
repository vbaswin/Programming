/*
      Homework 8: Left-Max

    ● Given array, change each element at position i to be the maximum of
    numbers from 0 to index i
        (just print the array in ascending order and if there is a 
        small no then print the before no)
    ● E.g. input 1 3 5 7 4 2 ⇒ [1, 3, 5, 7, 7, 7]
    ● Void left_max(int arr[], int len);
*/

#include <iostream>
using namespace std;

void left_max(int arr[], int len) {
    if (len == 1)
        // at the last stop to avoiding checking out of array
        return;
    left_max(arr, len -1);
    arr[len -1] = max(arr[len -1], arr[len - 2]);
}

int main() {
    int n, arr[20];
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    left_max(arr, n);

    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << "\n";
    return 0;
}

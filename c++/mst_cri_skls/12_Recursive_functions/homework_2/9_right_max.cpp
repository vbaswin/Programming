/*
     Homework 9: Right-Max

    ● Given array, change each element at position i to be the maximum of
    numbers from index i to end of array
    ● E.g. input 1 3 5 7 4 2 ⇒ [7, 7, 7, 7, 4, 2]
    ● Void right_max(int arr[], int len, int start_position = 0); 
*/

#include <iostream>
using namespace std;

void right_max(int arr[], int len) {
    if (len == 1)
        return;
    arr[len - 2] = max(arr[len -1], arr[len - 2]);
    right_max(arr, len - 1);
}

int main() {
    int n, arr[20];
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    right_max(arr, n);
    
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << "\n";
    return 0;
}

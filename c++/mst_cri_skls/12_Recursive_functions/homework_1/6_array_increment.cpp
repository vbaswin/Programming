/*
     Homework 6: Array Increment

    ● void array_increment(int arr[], int len)
    ● The function increments each arr[i] with i
    ● E.g. for input
        ○ [1, 2, 5, 9] it be [1+0, 2+1, 5+2, 9+3]
        ○ 1 8 2 10 3 ⇒ 1 9 4 13 7
*/

#include <iostream>
using namespace std;

void arr_increment(int arr[], int n) {
    if (n == 0)
        return;
    arr_increment(arr, n - 1);
    arr[n - 1] += n - 1;
    // same if we put this here arr_increment(arr, n - 1);
}

int main() {
    int n, arr[20];
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    arr_increment(arr, n);
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << "\n";
    return 0;
}

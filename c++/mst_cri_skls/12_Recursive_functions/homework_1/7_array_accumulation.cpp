/*
        Homework 7: Array Accumulation

    ● Given an array we want to accumulate it as following:
        ○ Input 1 2 3 4 5 6
        ○ Output array
            ■ 1, 1+2, 1+2+3, 1+2+3+4, 1+2+3+4+5, 1+2+3+4+5+6
            ■ 1, 3, 6, 10, 15, 21
        ○ That is return arr[i] = sum of all numbers from 0 to i
    ● void accumulate_arr(int arr[], int len);
        ○ Input 1 8 2 10 3 ⇒ 1 9 11 21 24
*/

#include <iostream>
using namespace std;

void accumulate_arr(int arr[], int len) {
    if (len == 0)
        return;
    accumulate_arr(arr, len - 1);
    for (int i = 0; i < len; ++i)
        arr[len - 1] += i;
}

int main() {
    int n, arr[20];
    cin >> n;
    for (int i = 0;i < n; ++i)
        cin >> arr[i];
    accumulate_arr(arr, n);
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << "\n";
    return 0;
}

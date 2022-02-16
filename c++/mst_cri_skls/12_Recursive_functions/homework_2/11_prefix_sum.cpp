/*
     Homework 11: Prefix Sum

    ● Write a function that sums only the first N elements in an array.
    ● Define its signature
    ● Input [1, 3, 4, 6, 7], 3 ⇒ 8 (1+3+4)
*/
#include <iostream>
using namespace std;

int prefix_sum(int arr[], int n) {
    if (n == 0)
        return 0;
    return arr[0] + prefix_sum(arr + 1, n -1);
}

int prefix_sum_1(int arr[], int n, int start = 0) {
    if (n == 0)
        return 0;
    return arr[start] + prefix_sum_1(arr, n-1, start +1);
}

int main() {
    int len, n, arr[20];
    cin >> len;
    for (int i = 0;i < len; ++i)
        cin >> arr[i];
    cin >> n;
    cout << prefix_sum(arr, n) << "\n";
    cout << prefix_sum_1(arr, n) << "\n";
    return 0;
}

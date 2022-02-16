/*
     Homework 10: Suffix Sum

    ● Write a function that sums only the last N elements in an array.
    ● Define its signature
    ● Input [1, 3, 4, 6, 7], 3 ⇒ 17 (4+6+7)
*/

#include <iostream>
using namespace std;

int suffix_sum(int arr[], int len, int n) {
    if (n == 0)
        return 0;
    return  arr[len -1] + suffix_sum(arr, len -1, n -1);
}

int main() {
    int len, n, arr[20];
    cin >> len;
    for (int i = 0;i < len; ++i)
        cin >> arr[i];

    cin >> n;
    cout << suffix_sum(arr,len, n) << "\n";
    return 0;
}

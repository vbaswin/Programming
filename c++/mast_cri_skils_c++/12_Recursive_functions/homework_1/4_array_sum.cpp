/*
     Homework 4: Array sum

    ● Int sum(int arr[], int len);
    ● Write a function that computes array sum
    ● Input 1, 8, 2, 10, 3 ⇒ 24
*/

#include <iostream>
using namespace std;

int array_sum(int arr[], int len) {
    if (len == 1)
        return arr[0];
    return arr[len - 1] + array_sum(arr, len - 1);
}

int main() {
    int len, arr[20];
    cin >> len;
    for (int i = 0;i < len; ++i)
        cin >> arr[i];
    cout << array_sum(arr, len) << "\n";
    return 0;
}


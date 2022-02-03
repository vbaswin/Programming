/*
     Homework 5: Array average

    ● double average(int arr[], int len);
    ● Write a function that computes array average
        ○ Don’t divide by length in the main
    ● Input 1, 8, 2, 10, 3 ⇒ 4.8
*/

#include <iostream>
using namespace std;

int average(int arr[], int len) {
    if (len == 1)
        return arr[0];
    int subresult = average(arr, len -1) * (len -1);
    int sum;
    return sum += (subresult)/len;
}

int main() {
    int len, arr[20];
    cin >> len;
    for (int i = 0; i < len; ++i)
        cin >> arr[i];
    cout << average(arr, len) << "\n";
    return 0;
}

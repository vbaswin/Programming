/*
     Homework 5: Array average

    ● double average(double arr[], int len);
    ● Write a function that computes array average
        ○ Don’t divide by length in the main
    ● Input 1, 8, 2, 10, 3 ⇒ 4.8

    >>>>>>>> very tricky do it once more >>>>>
*/

#include <iostream>
using namespace std;

double average(double arr[], int len) {
    if (len == 1)
        return arr[0];
    double subresult = average(arr, len -1) * (len -1);
    // we are changing average to sum every step and only in the last
    // we return the average
    return (subresult + arr[len-1])/len;
}

int main() {
    int len;
    double arr[20];
    cin >> len;
    for (int i = 0; i < len; ++i)
        cin >> arr[i];
    cout << average(arr, len) << "\n";
    return 0;
}

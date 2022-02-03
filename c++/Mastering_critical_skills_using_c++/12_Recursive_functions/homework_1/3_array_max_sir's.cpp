/*
     Homework 3: Array maximum

    ● int arr_max(int arr[], int len);
    ● Write a function that computes array maximum
    ● Input 1, 8, 2, 10, 3 ⇒ 10
*/

#include <iostream>
using namespace std;

int arr_max(int arr[], int len) {
    if (len == 0)
        return arr[0];
    int subresult = arr_max(arr, len - 1); // max from first 4 indexes ie 0 to 3
                                           // and last compared like sir said
    return max(subresult, arr[len -1]);    // no need to trace till the end
}                                          // check if all the conditions are 
                                           // satisfied or not 
int main() {
    int len, arr[20];
    cin >> len;
    for (int i = 0; i < len; ++i)
        cin >> arr[i];
    cout << arr_max(arr, len) << "\n";
    return 0;
}

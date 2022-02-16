/*
     Homework 12: Is Palindrome

    ● Implement a function that decides if array is palindrome or not
    ● Define its signature
*/
#include <iostream>
using namespace std;

int palindrome(int arr[], int len, int start = 0) {
    if (start > len)
        return;
    if (arr[start] != arr[len - 1])
        return 0;
    else 
        palindrome(arr, len -1, start +1);
}

int main() {
    int len, arr[20];
    cin >> len;
    for (int i= 0; i < len; ++i)
        cin >> arr[i];
    if (palindrome(arr, len))
        cout << "Palindrome\n";
    else
        cout << "Not palindrome\n";
    return 0;
}

/*
  Homework 4: Is Palindrome Array

● Read N, then N integers for an Array. Call a function with the array to check if
the array is palindrome or note
*/

#include <iostream>
using namespace std;

int read_array(int a[]) {
    int len;
    cout << "Enter len: ";
    cin >> len;
    for (int i = 0; i < len; ++i)
        cin >> a[i];
    return len;
}

bool is_palindrome(int a[], int len) {
    int st = 0, en = len - 1;
    while (st < en) {
        if (a[st] != a[en])
            return false;
        ++st, --en;
    }
    return true;
}

int main() {
    int a[100];
    int len = read_array(a);
    cout << is_palindrome(a, len) << "\n";
    return 0;
}

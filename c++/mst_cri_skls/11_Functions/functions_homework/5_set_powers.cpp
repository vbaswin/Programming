/*
    Homework 5: Set-powers

    ● Implement this function
    ● void set_powers(int arr[], int len = 5, int m = 2)
    ● This function will fill the array of len as following:
        ○ The i-th position: m^i, e.g. m * m * m ... i times
        ○ E.g. for len = 6, m = 2 ⇒ 1 2 4 8 16 32
        ○ E.g. for len = 4, m = 3 ⇒ 1 3 9 27
    ● After a return from call: print the array 
*/

#include <iostream>
#include <cmath>
using namespace std;

void set_powers(int arr[], int len, int m) {
    for (int i = 0; i < len; ++i) 
        arr[i] = pow(m, i);
}

void display(int arr[], int len) {
    for (int i = 0; i < len; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}
int main() {
    int len, m, arr[100];
    cout << "Enter len and m\n";
    cin >> len >> m;
    set_powers(arr, len, m);
    display(arr, len);
    return 0;
}

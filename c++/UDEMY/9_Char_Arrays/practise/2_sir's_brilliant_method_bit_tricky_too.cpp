/*******************************************************************
letters FREQUENCY

Read a string of lower/upper letters, ignore letters and compute the
frequency of lower letters. Print ones that exists as below.

input : bAAAaaazz
output:
    a 3
    b 1
    z 2
******************************************************************/

#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;

    int frequency[150] {0}; // freq arra where we consider the str[i]
    // individual char int values as the index of freq
    for (int i = 0; i < str.size(); ++i) {
        frequency[str[i]]++; // freq[int value of each char]++ as freq
    }   // is an int value so inside freq will also be int value

    for (int i = 'a'; i <= 'z'; ++i) {
        if (frequency[i]) {
            cout << (char)i << " " << frequency[i] << endl; // i will be 
        } // in int as freq is int so we need to convert it into char first
    }
    /* 
    We can use array of 26 and do operations.
    Here is easier code.
    We knew both 'z' and 'Z' are small values.Array of 150 is more thon
                    we need. Use bigger array.
    iterate only 'a' to 'z'.
    */

    return 0;
}
/*********************************************************************** 
CONC Strings
============

Read 2 strings S and T. Print a new string that contains the following.
    ~> First letter of the string S followed by the first letter of the 
        string T
    ~> 2nd letter of S followed by 2nd letter of T
    ~> and so on
Don't create new strings. Don't change input content

input           output
abc defghi      => adbecfghi
AM CICPC        => ACMICPC
**********************************************************************/

#include <iostream>
using namespace std;

int main() {
    string first, second;
    cin >> first >> second;

    int mx_idx = first.size();
    if (mx_idx < second.size()) {
        mx_idx = second.size();
    }

    for (int i = 0; i < mx_idx; ++i) {
        if (i < first.size()) {
            cout << first[i];
        }

        if (i < second.size()) {
            cout << second[i];
        }
    }

    cout << endl;
    return 0;
}
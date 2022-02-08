/************************************************************************ 
Read a string, then divide it to consecutive groups of same letter. Print 
each group.
input           output
"111222aabbb"   111 222 aa bbb
"HHHH"          HHHH 
*************************************************************************/

#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;

    int frequency[150] {0};
    for (int i = 0; i < str.size(); ++i) {
        frequency[str[i]]++;
    }

    for (int i = 0; i < 150; ++i) {
        if (frequency[i] != 0) {
            for (int j = 0; j < frequency[i]; ++j) {
                cout << (char) i;
            }
        cout << " ";
        }
    }

    cout << endl; 
    return 0;
}
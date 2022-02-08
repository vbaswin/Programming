/******************************************************************** 
COMPARE 2 STRINGS 

Read 2 strings, then output YES if the first smaller than or equal to 
second. Otherwise, output NO.
    ~> don't use < operator to compare strings, use loops

input               output 
aaa aaa             YES
aaaaa aa            NO
abe d               YES
ddddddddddddd xyz   YES
azzzzzzzzz za       YES
za azzzzzz          NO
*******************************************************************/

#include <iostream>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    int sz = a.size();
    if (sz < b.size())
        sz = b.size();

    int smaller = 1;
    for (int i = 0; i < sz; i++) {
        if (a[i] != b[i]) {
            if (a[i] < b[i])
                smaller = 1;
            else 
                smaller = 0;
            break;
        }
    }

    if (smaller)
        cout << "YES\n" << endl;
    else 
        cout << "NO\n" << endl;

    return 0;
}
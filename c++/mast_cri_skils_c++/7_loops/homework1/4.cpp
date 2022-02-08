/**********************************************************************
Read integer N, print a face down left angled triangle that has N rows

6
******
*****
****
***
**
*
**********************************************************************/

#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;

    for (int row = n; row > 0; --row) {
        for (int starcount = row; starcount > 0; --starcount)
            cout << "*";

        cout << endl;
    }

    return 0;
}
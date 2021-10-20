/******************************************************************* 
COMPRESSING

Read a string of letters and then compress each group of same letter
    ~> eg: if the sub-string is cccc => c4
    ~> use _ between each group

input               output
ccccDDDxxxxxxxxe    => c4_D3_x8_e1
xxxxxxxx            => x8
********************************************************************/

#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;

    int group_sz = 1; // group size 
    bool need_ = false; // for _ symbol 
    for (int i = 0; i < (int) str.size(); ++i) { 
// comes to the last value of str ie null != previous so prints a new 
// group
        if (str[i] != str[i + 1]) {
            if (need_)
                cout << "_";
            cout << str[i] << group_sz;

            group_sz = 0; // reverting to zero after one group
            need_ = true;
        }
        group_sz++; // increasing for each group
    }
    cout << endl;
    return 0;
}

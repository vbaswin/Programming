/*********************************************************************** 
Is substring 

Read 2 strings input and str. Print YES if the given str is a substring 
for the string. Otherwise. print NO.

Input           Output
ABCDEFG  ABCD     => YES
ABCDEFG  ABCDEF   => YES
ABCDEFG  EFG      => YES
ABCDEFG  DEFG     => YES
ABCDEFG  BCD      => YES
ABCDEFG  DEF      => YES
ABCDEFG  ACEG     => NO
ABCDEFG  DG       => NO 
ABCDEFG  GD       => NO
ABCDEFG  ABCDEFG  => YES
*************************************************************************/

#include <iostream>
using namespace std;

int main() {
    string big , small;
    cin >> big >> small;

    if (small.size() > big.size()) {
        cout << "NO\n";
        return 0;
    }
/*=== 
iterating the big string till possible length to campare to small string
here big.size() and small.size() are 1-based therefore subtracting,
we get 0-based but 
since i is 0-based i < x, x should be 1-based.
=> So, we need add one ::: everything has its own meaning in C++ find 
that 
===*/   for (int i = 0; i < (int) big.size()- small.size() + 1; ++i) {
        bool is_match = true; 
        for (int j = 0; j < (int) small.size(); ++j) {
            if (small[j] != big[i + j]) { // comparing values of small 
                is_match = false;// string to big string 
            }
        }
        if (is_match) { // for each comparison if true then stop and YES
            cout << "YES\n";
            return 0;
        }
    }

    cout << "NO\n";
    return 0;
}

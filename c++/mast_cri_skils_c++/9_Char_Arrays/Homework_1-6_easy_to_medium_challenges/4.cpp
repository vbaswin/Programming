/*********************************************************************** 
Is subsequence

Read 2 strings input and str. Print YES if the given str is a substring 
for the string. Otherwise. print NO.

Input           Output
ABCDEFG  ABCD     => YES
ABCDEFG  ABCDEF   => YES
ABCDEFG  EFG      => YES
ABCDEFG  DEFG     => YES
ABCDEFG  BCD      => YES
ABCDEFG  DEF      => YES
ABCDEFG  ACEG     => YES
ABCDEFG  DG       => YES
ABCDEFG  GD       => NO     - different order than first string 
ABCDEFG  ABCDEFG  => YES
*************************************************************************/

#include <iostream>
using namespace std;

int main() {
    string big_str, small_str;
    cin >> big_str >> small_str;

    int position[small_str.size()] {0};
    for (int i = 0; i < (int) small_str.size(); ++i) {
        for (int j = 0; j < (int) big_str.size(); ++j) {
            if (small_str[i] == big_str[j]) {
                position[i] = j;
            }   
        }
    }

    for (int i = 0; i < small_str.size() -1 ; ++i) {
        if (position[i] > position[i + 1]) {
            cout << "NO\n";
            return 0;
        }
    }

    cout << "YES\n";

    return 0;
}
/************************************************************************* 
Read 2 strings input and str. Print YES if the given str is a suffix 
for the string.

Input   --> output
ABCDEFG  ABCD     => N0
ABCDEFG  ABCDEF   => N0
ABCDEFG  EFG      => YES
ABCDEFG  DEFG     => YES
ABCDEFG  BCD      => NO
ABCDEFG  DEF      => NO 
ABCDEFG  ACEG     => NO
ABCDEFG  DG       => NO 
ABCDEFG  GD       => NO
ABCDEFG  ABCDEFG  => YES

SUFFIX: a tetter or group of letters added at the end of a word to make a 
new word 
************************************************************************/

#include <iostream>
using namespace std;

int main() {
    string big_str, small_str;
    cin >> big_str >> small_str;

    if (small_str.size() > big_str.size()) {
        cout << "NO\n";
        return 0;
    }

    // Compare the end of the small with the large 
    int big_end = (int)big_str.size() -1; // as string is 0-based indexing
    int small_end = (int)small_str.size() -1;
    for (int i = 0; i < (int) small_str.size(); ++i) {
        if (big_str[big_end--] != small_str[small_end--]) { // we look
            cout << "NO\n"; // if the ends of the strings are same or
            return 0; // in ordera
        } 
    }
    cout << "YES\n";

    return 0;
}

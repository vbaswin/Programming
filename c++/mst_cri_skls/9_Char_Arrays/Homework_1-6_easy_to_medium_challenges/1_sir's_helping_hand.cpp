/************************************************************************** 
is prefix

Read 2 strings input and str. Print YES if the given str is a prefix of the
string. Otherwise, print NO.
input           Output
ABCDEFG  ABCD     => YES
ABCDEFG  ABCDEF   => YES
ABCDEFG  EFG      => NO
ABCDEFG  DEFG     => NO 
ABCDEFG  BCD      => NO 
ABCDEFG  DEF      => NO 
ABCDEFG  ACEG     => NO
ABCDEFG  DG       => NO 
ABCDEFG  GD       => NO
ABCDEFG  ABCDEFG  => YES 
**************************************************************************/

#include <iostream> 
using namespace std;

int main() {
    string input, str;
    cin >> input >> str;

    if (str.size() > input.size()) { // these are test cases we need
        cout << "NO" << endl; // to find and exclude by ourselves
        return 0; // simple way to stop the program saves using bool 
    }

    for (int i = 0; i < str.size(); ++i) {
        if (str[i] != input[i]) {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
    return 0;
}
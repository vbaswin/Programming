/*
     Homework 13: Is prefix

    ● bool is_prefix(string main, string prefix, int start_pos = 0)
    ● E.g. is_prefix(“abcdefgh”, “abcd”) ⇒ true
    ● E.g. is_prefix(“abcdefgh”, “”) ⇒ true
    ● E.g. is_prefix(“abcdefgh”, “abd”) ⇒ false
*/

#include <iostream>
using namespace std;

bool is_prefix(string main, string prefix, int start_pos = 0) {
    if (start_pos == prefix.size())
        return true;
    if (main[start_pos] != main[start_pos])
        return false;
    return is_prefix(main, prefix, start_pos + 1);
}

int main() {
    cout << is_prefix("abcdefgh" , "abcd") << "\n";
    // cout << is_prefix("abcdefgh" , "abcd", 3) << "\n"; also possible 
    cout << is_prefix("abcdefgh" , "") << "\n";
    cout << is_prefix("abcdefgh" , "abd") << "\n";
    return 0;
}

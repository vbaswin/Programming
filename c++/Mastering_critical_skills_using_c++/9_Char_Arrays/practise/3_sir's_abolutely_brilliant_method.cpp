/************************************************************** 
Special String Mapping

Read a string and do the following conversions for its letters
    ~> if it is an upper letter, don't change
    ~> if it is a lower letter, use this map of 26 letters:
        abcdefghijklmnopqrstuvwxyz
        YZIMNESTODUAPWXHQFBRJKCGVL
        eg a -> y & z -> L
    ~> if it is digit, use this map of 10 letters
        0123456789
        !@#$%^&*()
input           output
acMNmn39      => YIMNPW$)
vwXYZ0123     => KCXYZ!@#$
*************************************************************/

#include <iostream>
using namespace std;

int main() {

    string from = "abcdefghijklmnopqrstuvwxyz0123456789";
    string to   = "YZIMNESTODUAPWXHQFBRJKCGVL!@#$%^&*()";

    char letter_map[150] {0}; // we can also use int here and we will
    // get the same answer as letter are just numbers in c++ and they
    // can be used interchangebly no matter what and c++ recognises
    // that
    for (int i = 0; i < from.size();++i) {
        letter_map[from[i]] = to[i]; // change the value of letter in
    } // from which is the index of letter_map to what we want

    string str;
    cin >> str;

    for (int i = 0; i < str.size(); ++i) {
        if ('A' <= str[i] && str[i] <= 'Z') {
            continue; // continue to next iteration if capital
        }
        else {
            str[i] = letter_map[str[i]]; // change the value of 
        } // string with value of index corresponding to str[i]
    }

    cout << str << endl;
    return 0;
}
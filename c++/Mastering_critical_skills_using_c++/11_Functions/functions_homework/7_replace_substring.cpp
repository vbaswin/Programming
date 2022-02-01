/*

 Homework 7: Replace substring

    ● Implement this function
    ● string replace_str(string input, string pattern, string to)
        ○ Constraints: Input consists only of lower cases, 
          len(pattern) > 0, len(to) >= 0
    ● The function replaces every pattern with to and return it
        ○ Input: “aabcabaaad”, “aa”, “x” - Return: “xbcabxad”
        ○ Input: “aabcabaaad”, “aa”, “aaaa” - Return: “aaaabcabaaaaad”
        ○ Input: “aabcabaaad”, “aa”, “” - Return: “bcabad”
    ● Let your code makes use of another function:
        ○ bool starts_with(string input, string pattern, int pos);
        ○ Return true if string input has the pattern starting from pos
        ○ Input: “aabcabaaad”, “aa”, 0 ⇒ True
        ○ Input: “aabcabaaad”, “aa”, 1 ⇒ False
*/

#include <iostream>
using namespace std;

bool starts_with(string input, string pattern, int pos) {
    if (pos + pattern.size() > input.size())
        return false;
    for (int i = 0; i < pattern.size(); ++i, ++pos) {
        if (input[pos] != pattern[i])
            return false;
    }
    return true;
}

string replace_str(string input, string pattern, string to) {
    string res = "";
    for (int pos = 0; pos < input.size(); ++pos) {

        if (starts_with(input, pattern, pos)) {
            res += to;
            pos += pattern.size() - 1; // -1 cause for loop ++pos
        } 
        else 
            res += input[pos];
    }
    return res;
}

int main() {
    string input, pattern, to, res;
    cin >> input >> pattern >> to;
    cout << replace_str(input, pattern, to) << "\n"; 
    // we cannot input empty string in to string here so like sir we need to
    // give separate cout like cout << replace_str("aabcabaaad" , "aa" , "" ); 
}


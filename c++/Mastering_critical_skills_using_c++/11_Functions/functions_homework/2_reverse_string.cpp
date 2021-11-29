/* 
Homework 2: Reverse a string

Develop a function that do reverse for the string. Function is:
>> string reverse_str(const string & str);
    ~> Don’t try to change str content or you will get compilation error
 */

#include <iostream>
#include <string>
using namespace std;
string reverse_str(const string &str) {

    string rev = str; // copy str to rev simple as that

/* find the length of string in c++ str.size()  str.length()*/
    int start = 0, end = rev.size() -1;
    while (start < end) { 
    /* more logical swapping ig */
        int tmp = rev[start];
        rev[start] = rev[end];
        rev[end] = tmp;
        ++start,--end;
    }
    return rev;
}

int main() {
    string str;
    cin >> str;

    cout << reverse_str(str) << "\n";

    return 0;
}
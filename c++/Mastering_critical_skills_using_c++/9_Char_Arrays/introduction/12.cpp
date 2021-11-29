/***** 
4:quiz 
******/

#include <iostream>
using namespace std;

int main() {
    char str[] {"abcdef"};
    str[1] = 0; // the value of null char '\0' is actully zero, so we can
    cout << str << endl;// just set it and terminate str printing from 
    // 2nd char
    return 0;
}
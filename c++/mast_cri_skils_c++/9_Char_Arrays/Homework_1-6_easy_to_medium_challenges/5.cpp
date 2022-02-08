/*************************************************************** 
Read a string of 6 letters maximum, convert it to int then print
    ~> the number, the number multiplied by 3
input       output
"100"       => 100 300
"0200"      => 200 600
***************************************************************/

#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;

    int number = 0;
// earlier logic multiply with 10 and add digit
// we need to convert each str[i] to number by subtracting from 0 
// like getting int value of abcd by subtracting from a 
    for (int i = 0; i < str.size(); ++i) {
        number = number * 10 + (str[i] - '0'); // #
    }

    cout << number << " " << number * 3 << endl;

    return 0;
}
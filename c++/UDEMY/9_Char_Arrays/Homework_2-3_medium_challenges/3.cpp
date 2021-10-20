/********************************************************************* 
ADD 5555

Read a very long string of digits (at least 6 digits), and add 5555 to 
it
    don't convert to integer, as integer has max limit for values
    
input           output 
"100000"        "105555" 
"10001234"      "10004789"
"3001072"       "3006627"
"10999999999"   "11000005554"
"9999999999999999999999999999999999999" => 
"1000000000000000000000000000000005554"
**********************************************************************/

#include <iostream>
using namespace std;

int main() {
    string a;
    cin >> a;
    int sz = a.size();
    int carry = 0;
    for (int i = 0; i < sz; i++) {
        int digit = a[sz -i -1] - '0';

    if (i < 4)
        digit += 5;
    digit += carry;
    
    if (digit >= 10)
        digit -= 10, carry = 1;

    a[sz -i -1] = digit + '0';
    }
    if (carry)
        cout << 1;
    cout << a << endl;
    
    return 0;
}

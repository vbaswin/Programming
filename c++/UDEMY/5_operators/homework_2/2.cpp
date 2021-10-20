/******************************************************
Read an integer and print the sum of it's last 3 digits

input    output
15          6
125         8
1000        0
1001        1
1234        9
99999       27 
******************************************************/
#include <iostream>
using namespace std;

int main()
{

    int x;

    cin >> x;

    int last_digit1 = x % 10;
    x /= 10;

    int last_digit2 = x % 10;
    x /= 10;

    int last_digit3 = x % 10;
    x /= 10;

    cout << last_digit1 + last_digit2 + last_digit3 << "\n";
        
    int y;

    cin >> y;
    
    cout << y % 100 << "\n"; // % 100 gives the last 2 digits and % 1000 gives the last 3 digits

    return 0;
}
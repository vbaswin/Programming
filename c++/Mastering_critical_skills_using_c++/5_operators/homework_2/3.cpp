/*****************************************************
Read an integer and print the 4th from the right side.
if no digit print 0

input       output
15          0
125         0
1000        1
5001        5
1234        1
654321      4
99999       9  
*****************************************************/

#include <iostream>
using namespace std;

int main()
{

    int x;
    cin >> x;

    x = x / 1000;
    double y = (double)x /10;
    y = y - (int)y;
    cout << y * 10 << "\n\n";

    // sir's super simple method
    int z;
    cin >> z;
    cout << (z / 1000) % 10 << "\n";

    return 0;
}
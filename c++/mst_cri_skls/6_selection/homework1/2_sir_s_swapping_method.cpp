/*********************************************************************
Given 3 integers, sort (order) them in ascending order and print them

input       output
1 2 3    => 1 2 3
1 3 2    => 1 2 3
2 1 3    => 1 2 3
2 3 1    => 1 2 3
3 1 2    => 1 2 3
3 2 1    => 1 2 3
**********************************************************************/

#include <iostream>
using namespace std;

int main()
{

    int a, b, c, temp;
    cin >> a >> b >> c;

    if (a > b)    
    {
        temp = a;
        a = b;
        b = temp;
    }

    if (b > c)
    {
        temp = c;
        c = b;
        b = temp;

    }

    if (a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }

    cout << a << " " << b << " " << c << "\n";

    return 0;
}
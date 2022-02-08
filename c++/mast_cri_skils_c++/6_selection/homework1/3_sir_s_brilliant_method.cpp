/************************************************************* 
Given 3 integers, find the biggest one of them which is < 100
    -> print -1 if no such number
    
input           output
22 90 115       90
200 300 400     -1
50 100 150      50
10 30 20        30
**************************************************************/

#include <iostream> 
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int max = -1; // as we need to print -1 if nothing is less than 100

    // to make the condition applicable to negative numbers too 
    if (a < 100)
        max = a;
    if (b < 100)
        max = b;
    if (c < 100)
        max = c;
    
    // we just need to print one digit that is max and < 100
    if (a < 100 && a > max)
        max = a;
    if (b < 100 && b > max)
        max = b;
    if (c < 100 && c > max)
        max = c;

    cout << max << "\n";

    return 0;
}
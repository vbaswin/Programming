/*************************************************************
Read an integer and print 100 if number is even or 7 if is odd

input       output
8           100
133         7
*************************************************************/

#include <iostream>
using namespace std;

int main()
{

    int x;
    cin >> x;

    bool result = x % 2;

    if(result == 0)
        cout << "100" << "\n";
    else
        cout << "7" << "\n";
    
    // without using if function sir given method

    int is_even = x % 2 == 0;
    int is_odd  = 1 - is_even;
    
    int result1 =  is_even * 100 + is_odd * 7;
    cout << result1 << "\n";

    return 0;
}
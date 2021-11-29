/********************************************************************
Read starting number X and ending number Y, print all numbers between
X and Y inclusive, each on a line.

input   output
3 7     3 4 5 6 7 
*********************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;

    cout << "\n";
    
    while (x <= y)
    {
        cout << x << "\n";
        ++x;
    }

    return 0;
}
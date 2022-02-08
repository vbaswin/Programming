/**************************** 
For loops syntax introduction
*****************************/

#include <iostream>
using namespace std;

int main()
{
    int sum;
    for (int x = 1; x < 6; ++x)
    {
        sum += x;
    }

    cout << sum << "\n";

    return 0;
}
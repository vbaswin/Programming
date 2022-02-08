/*********************************************** 
with c++17, if condition changes from
if(condition)  >>==>> if(initialize; condition)
***********************************************/

#include <iostream>
using namespace std;

int main()
{

    int x;
    cin >> x;

    if (x % 2 == 0)
        cout << x << " is even\n";
    else if (x % 2 == 1)
        cout << x << " is odd \n";

    cout << x << "\n"; // is visible here but there is no need for that

    if (int y = 10; y % 2 == 0) // initializer, here y is visible only in if-else block
        cout << y << " is even\n";
    else if (y % 2 == 1)
        cout << y << " is odd\n";

    return 0;
}
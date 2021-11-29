/*************************************** 
Read 2 integers x and y and compute  x^y
***************************************/

#include <iostream>
using namespace std;

int main()
{
    #pragma region // my bad method

    int x, y;
    cin >> x >> y;

    int start = 1;
    int times = 1;

    while (times <= y)
    {
        start *= x;
        ++times;
    }

    cout << start << "\n";

    #pragma endregion

    #pragma region // sir's best method

    int num, pow;
    cin >> num >> pow;

    int result = 1;

    while (pow >= 1)
    {
        result *= num;
        --pow;
    }

    cout << result << "\n";

    #pragma endregion
    
    
    return 0;
}
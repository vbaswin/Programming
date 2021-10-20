/************************************************* 
1. Print first 5 numbers
2. Sum of the first 5 numbers
3. Sum of 5 + 4 + 3 + 2 + 1
4. BREAK    : go te the line after loop
5. CONTINUE : go to the starting line of the loop 
**************************************************/

#include <iostream>
using namespace std;

int main()
{
    #pragma region print 5 numbers

    int x = 1;

    while (x <= 5)
    {
        cout << x << " ";
        ++x;
    }

    #pragma endregion

    cout << "\n";

    #pragma region sum of 5 numbers

    int y = 1, sum = 0;

    while (y <= 5)
    {
        sum += y;
        cout << y << " ";
        ++y;
    }
    
    cout << sum << "\n";

    #pragma endregion

    cout << "\n";

    #pragma region reverse sum of 5 numbers

    int z = 5;
    int sum2 = 0;

    while (z > 0)
    {
        sum2 += z;
        cout << z << " ";
        --z;
    }

    cout << sum2 << "\n";

    #pragma endregion

    cout << "\n";

    #pragma region division till 2 nd no is 0 using break
    int a, b;

    while (true)
    {
        cin >> a >> b;

        if (b == 0)
        {
            cout << "At last b is 0\nBye\n"; 
            break;
        }
        cout << a/b << "\n"; 

    }

    #pragma endregion

    cout << "\n";

    #pragma region using continue

    int m, n;
    while (true)
    {
        cin >> m >> n;

        if (n == 0)
        {
            cout << "At last n is 0\nBye\n";
            continue;
        }
    }

    #pragma endregion
    
    return 0;
}
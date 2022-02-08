/*************************************************************** 
Read an integer N(1 <= 30), print the first N numberss that are
    ~> multiple of 3 but not multiple of 4
    
input : 11
output: 3 6 9 15 18 21 27 30 33 39 42

>>=>> note: print N number of multiple of 3 and not upto 3
***************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int temp = N;
#pragma region // sir's first method

    int num = 1;
    while (N > 0)
    {
        if (num % 3 == 0 && num % 4 != 0)
        {
            cout << num << " ";
            --N;                        //  "Don't forget to interchange the iterations" //
        }
        ++num;
    }

    cout << "\n";

#pragma endregion

#pragma region // sir's 2nd brilliant method

    int num1 = 0;

    while (temp) // as when temp is 0, condition is false
    {
        if (num1 % 4 != 0)
        {
            cout << num1 << " ";
            --temp;                     //  "Don't forget to interchange the iterations" //
        }
        num1 += 3;
    }

    cout << "\n";

#pragma endregion

    return 0;
}
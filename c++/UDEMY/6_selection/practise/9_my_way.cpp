/*********************************************************************** 
Read an integer
~> if number < 10000, print is a small number
~> otherwise sum the last 3 digits of the number
    => if sum is odd, say this is a great number
    => otherwise, if sum is even
        -> if any digit of the last 3 is odd, say this is a good number
        -> otherwise, say this is a bad number
***********************************************************************/

#include <iostream>
using namespace std;

int main()
{

    int N;
    cin >> N;

    if (N < 10000)
        cout << "This is a small number";
    else
    {
        int last_digit1 = N % 10;
        N = N / 10;
        int last_digit2 = N % 10;
        N = N / 10;
        int last_digit3 = N % 10;

        int sum = last_digit1 + last_digit2 + last_digit3;

        if (sum % 2 == 1)
            cout << "This is a great number"
                 << "\n";
        else                                                
        {
            if (last_digit1 % 2 == 1 || last_digit2 % 2 == 1 || last_digit3 % 2 == 1)
                cout << "This is a good number";    
            else
                cout << "This is a bad number";
        }
    }
    return 0;
}
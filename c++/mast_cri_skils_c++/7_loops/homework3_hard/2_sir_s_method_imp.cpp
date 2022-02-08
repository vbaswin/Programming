/************************************************** 
Read an integer N, then find its reverse integer R
    ~> print R R*3
input : 123
output: 321 963
**************************************************/

#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int reverse = 0;

    while (N > 0)
    {
        int last_digit = N % 10;                // make code as simple as possible
        reverse = reverse * 10 + last_digit;    // The important step. Just look at how beautiful 
        N /= 10;                                // it is
    }

    cout << reverse << " " << reverse * 3 << "\n";

    return 0;
}
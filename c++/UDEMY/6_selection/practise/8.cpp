/***************************************************************** 
Read integer N,
~> if even print last digit of it
~> if odd
    => if number < 1000, print last 2 digits
    => if number > 1000 and number < 1000000, print last 4 digits
    => otherwise print it's negative value

input       output
234      => 4
157      => 57
567169   => 7169
1000001  => -1000001
*****************************************************************/

#include <iostream>
using namespace std;

int main()
{

    int N;
    cin >> N;

    if (N % 2 == 0)
        cout << N % 10 << "\n";
    else
    {
        if (N < 1000)
            cout << N % 100 << "\n";
        else if (N > 1000 && N < 1000000)
            cout << N % 10000 << "\n";
        else
            cout << -1 * N << "\n";
    }
    return 0;
}
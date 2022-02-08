/**************************************************************** 
Read integer T for number of test cases.
For each test case read integer N, then read N integers a, b, c.
output: compute the following expression,
    ~> a + b*b + c*c*c + d*d*d*d + e*e*e*e*e + ...
    ~> ie; kth number is reapeted kth times
    
input               output
3   2   1 4         17
    3   5 7 2       62
    4   1 2 3 4     288
****************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;


    while (T)
    {
        int N, integers, sum = 0;

        cin >> N;
        int position = 1;
        while (position <= N)
        {
            cin >> integers;

            int prdct = 1;
            int multiples = position;
            while (multiples)
            {
                prdct *= integers;
                --multiples;
            }

            sum += prdct;
            ++position;
        }

        cout << sum << "\n";  // this needs to be inside T -
        --T;                              // while loop
    }

    
    return 0;
}
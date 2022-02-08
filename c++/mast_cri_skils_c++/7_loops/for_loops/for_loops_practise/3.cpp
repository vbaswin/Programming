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

=> same question but code using for loops
****************************************************************/


#include <iostream>
using namespace std;

int main()
{
    int T, N, num;
    cin >> T;
    
    while (T--)   
    {
        cin >> N;

        int sum = 0;
        for (int i = 0; i < N; ++i)
        {
            cin >> num;

            int multiples = 1;
            for (int j = 0; j < i + 1 ; ++j)
                multiples *= num;
            
            sum += multiples;        

        }

        cout << sum << "\n";
    }

    return 0;
}
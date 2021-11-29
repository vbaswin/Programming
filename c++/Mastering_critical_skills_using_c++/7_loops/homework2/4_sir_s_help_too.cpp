/********************************************************************* 
=>  Read integer T fo a number of test cases.
    for each test case, read integer N followed by reading N integers.
=>  For each test case, print the minimum of the N integers.

input : 2   6   10 50 20 70 30 4    3 10 5 30
output: 4 5
**********************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;


    while (T > 0)
    {
        int N;
        cin >> N;

        int position = 0, min;     // here min has a garbage value that's the main problem
        int num;
        
        while (position < N)    
        {
            cin >> num;             

            if (position == 0)      // this is a tricky thing. This condition is necessary 
                min = num;          // because we need to include the initial input as the 
            else if (num < min)     // first min value but not possible as it is inside the 
                min = num;          // while condition and therefore cout value will be 
                                    // unidentified ... just check it by chumma.cpp
            ++position;
        }

        cout << "\n" << min << "\n";
        --T;
    }


    return 0;
}
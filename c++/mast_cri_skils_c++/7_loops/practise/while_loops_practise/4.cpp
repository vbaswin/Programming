/********************************************************** 
Read integer T for T test cases.
Then read T numbers: for each number N print sum of 1 to N
**********************************************************/

#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T > 0)
    {
        int num;
        cin >> num;

        int sum = 0;
        int start = 1;          // we can alse use N*(N+1)/2 which is much more 
                                // efficient as we do not need an extra while loop
        while (start <=num)
        {                       
            sum += start;       
            ++start;
        }           

        cout << "Sum of digits from 1 to " << num << " is " << sum << "\n";

        --T;
    }
}
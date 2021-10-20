/**************************************************************
Read integer and count it's number of digits.
don't make bugs 
    1. special if condition for input 0
    2. cosider the negative values alse
    3. consider the input -2147483648
    4. make the input temp

Shows how hard and how much effort to make perfect bugless code
***************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;

    int tem_num = num;              // to get the input number unchanged
    int digits = 0;

    if (num == 0)                   // as it cannot be included in 1 digit, treated as special case
        digits = 1;
    else if (num == -2147483648)    // the max integer limit is from -2147483648 to 2147483647
        digits = 10;                //so if we did -num on the max number => 2147483648 > 2147483647 ~> overflow  ==> so a special handling for this case
    else
    {
        if (num < 0)                // change the negative input to positive one 
            num *= -1;
        
        while (num > 0) {
            digits += 1;
            num /= 10;
        }
    }
    cout << digits << "\n";

    cout << "No of digits of " << tem_num << " is " << digits <<"\n";

    return 0;
}
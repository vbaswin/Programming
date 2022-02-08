/***************************************************************************************************************************************************
 n / 10: removes the last number
 n % 2 : shows whether odd or even
 n % 10: gives the last digit  => [just think it as * for 10 anything at the end if it is not zero means it is a remainder and % prints the last one
                                                  * for 100 anything at the 2 end places not zero means it is a remainder and % prints the last two]
 **************************************************************************************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int n;
    
    cin  >> n;
    cout << n % 2 << "\n\n";

    cout << n % 10 << "\n\n";

    cout << n / 10 << "\n\n";

    return 0;
}
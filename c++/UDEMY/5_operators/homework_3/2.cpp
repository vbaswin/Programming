/*******************************************************
Assume each month of an year is 30 days,
Read an integer: whole number of days of someone's age. 
Print 3 numbers
    =>  * total years  = total months  * remaining days
*******************************************************/

#include <iostream>
using namespace std;

int main()
{

    int x;
    cin >> x;

    int years  = x / 360;
    int months = x % 360 / 30;
    int days   = x % 360 % 30;

    cout << years << " " <<  months << " " << days << "\n";

    return 0;
}
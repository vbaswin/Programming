/*******************************************************************************
Read 5 numbers and print the following 
    * their average
    * The sum of the first 3 numbers divided by the sum of the last 2 numbers
    * The average of the 3 numbers divided by the average of the last 2 numbers
    * what is the math relation between B and C?
******************************************************************************/

#include <iostream>
using namespace std;

int main()
{

    double a, b, c, d, e;

    cin >> a >> b >> c >> d >> e;

    double avg = (a + b + c + d + e)/5.0;
    double sumdiv = (a + b + c)/(d + e);
    double avgsumdiv = sumdiv * (2.0/3.0);

    cout << avg       << "\n";
    cout << sumdiv    << "\n";
    cout << avgsumdiv << "\n";

    return 0;
}
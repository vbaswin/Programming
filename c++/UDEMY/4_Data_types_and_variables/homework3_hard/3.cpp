/*****************************************************************
Write a program that reads integer N and print the sum from 1 to N
*****************************************************************/

#include <iostream>
using namespace std;

int main()
{

    int n;

    cin >> n;

    cout << n*(n+1)/2 <<"\n";

    /************************************************************************
    This is because if n = 8;
    we want to do the counting then making them in pairs , 1 8  2 7  3 6  4 5
    now the sum of all the pairs is 9 ie; n + 1 
    also the no of pairs is 4 ie; n/2
    so the sum of n natural numbers is n* (n+1)/2                     
    ************************************************************************/

    return 0;


}
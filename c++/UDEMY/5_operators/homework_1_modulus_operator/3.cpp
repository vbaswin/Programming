/***************************************************************
Read 2 positive integers and print their remainder without using 
the modulus operator %

input : 27, 12
output: 3
***************************************************************/

#include <iostream>
using namespace std;

int main()
{

    int a , b;

    cin >> a >> b;

    int div =a - a/b * b; // eg: 13/5 = 2
    //                           2 * 5 = 10
    //                           13 - 10 = 3
    cout << div << "\n";

    return 0;
}
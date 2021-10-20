/***************************************************
Read 2 numbers a,b and divide them (a/b), but prints 
only the fractional part

input : 201, 25
output: 0.04
****************************************************/
#include <iostream>
using namespace std;

int main()
{

    double a, b;

    cin >> a >> b;

    double div = a/b;

    cout << div - (int)div << "\n";

    return 0;

}
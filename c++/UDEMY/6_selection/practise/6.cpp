/*********************************************
Read 2 integers and print the minimum of them
inputs      outputs
10 20       10
70 5        5
**********************************************/

#include <iostream>
using namespace std;

int main()
{

    int num1, num2;
    cin >> num1 >> num2;

    if (num1 < num2)
        cout << num1 << "\n";
    else if (num2 < num1)
        cout << num2 << "\n";

    return 0;
}
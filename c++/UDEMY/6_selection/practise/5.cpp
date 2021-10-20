/****************************************************************** 
simple calculator

Read twe integers and a sign in between them which will indicate 
if the user want oddition, subtraction, multiplication, division of 
these two numbers

input       output
7 + 55       62
7 + 10      70
******************************************************************/

#include <iostream>
using namespace std;

int main()
{

    double num1, num2;
    char operation;

    cin >> num1 >> operation >> num2;

    if (operation == '+')
        cout << num1 + num2 << "\n";
    else if (operation == '-')
        cout << num1 - num2 << "\n";
    else if (operation == '*')
        cout << num1 * num2 << "\n";
    else if (operation == '/')
        cout << num1 / num2 << "\n";
    
    return 0;
}
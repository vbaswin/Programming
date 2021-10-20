/******************************
introducing constant data types
******************************/

#include <iostream>
#include <climits>
using namespace std;

int main()
{

    // use capital letters to denote constant values
    const double PI = 3.1419;
    
    const int LUCKY {13};

    const char charVal = 'A';

    const string str = "Welcome to our BANK";

    // c++ limits as constants
    cout << INT_MAX << "\n";
    cout << INT_MIN << "\n";
    
    return 0;
}
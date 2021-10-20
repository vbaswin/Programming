/******************** 
Escape Characters

starts with \
    => \n - new line
    => \t - tab
    => \0 - null
    => \" - "
*******************/

#include <iostream> 
using namespace std;

int main() {
    // escape characters

    cout << "hello\tworld\n";
    cout << "\0";
    cout << "Let's print a double quote \" \n";

    return 0;
 }


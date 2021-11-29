#include <iostream>
using namespace std;
/* 
A parameter is the variable which is part of declaration of our fn
a, b are parametrs. 10 is the default parameter for b
*/

void print(int a, int b = 10) {
    cout <<  a << " " << b << "\n";
}

int main() {
    int x = 2;
    /* argument is an expression used when calling a function
    x, 5 , 3*2+1 are arguments */
    print (x, 5);
    print (3*2+1, x);

    return 0;
}
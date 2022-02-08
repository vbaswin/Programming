/* 
Parameter casting if the input is different from the 
datatype of the parameters then if possible they are converted this
is parameter casting
*/

#include <iostream>
using namespace std;

int add(int a, int b) {
    return a+b;
}

int main() {
    cout << add(2, 3) << "\n";
    cout << add(2, 3.5) << "\n";

    return 0;
}

/* 
output

5
5
*/

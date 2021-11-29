/* -
3 cases of declaring a function

1.specifying a return value 
2. No return value
3. no parameter

if no value is input then default value her int p = 3 is taken
if value is input then default value is not taken

Int solve(int a, int b = 2, int c); wrong >>==>> default should be 
after put after the parameters 
Int solve(int a, int b, int c = 3); correct

We can have several defaults
Int solve(int a, int b = 2, int c = 3);
*/

#include <iostream>
using namespace std;

int our_pow(int n, int p = 3) {
    int result = 1;
    while (p--)
        result *= n;
    return result;
}


int main() {
    cout << our_pow(2) << "\n";
    cout << our_pow(2, 3) << "\n";
    cout << our_pow(2, 4) << "\n";

    return 0;
}

/* 
output 

8
8
16
 */




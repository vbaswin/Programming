/* 
Introduction to functions

Sum from 1 to n numbers using functions
*/

#include <iostream>
using namespace std;

int sum_1_to_n(int n) {
    /* int n -> parameter
     sum_1_to_n -> function name */
    int sum = 0; // sum is a local variable of fn sum_1_to_n

    for (int i = 1; i <= n; i++)
        sum += i;

    return sum;
}

int main() {
    int n;
    cin >> n;

    int result = sum_1_to_n(n); // calling the function
    cout << result << "\n";

    return 0;
}

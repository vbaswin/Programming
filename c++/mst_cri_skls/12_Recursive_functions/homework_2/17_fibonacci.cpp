/*
     Homework 17: Fibonacci

    ● Implement fibonacci: Int fibonacci(int n)
        ○ Recall fibonacci sequence: 1 1 2 3 5 8 13 21 35
        ○ E.g. fibonacci(6) = 13
        ○ Recall that: fibonacci(n) = fibonacci(n-1) + fibonacci(n-2). 
            E.g. fib(6) = fib(5)+fib(4) =13
        ■ So it calls 2 subproblems of its type
    ● Can u compute fibonacci(40)? fibonacci(50)? Why? Any work around? Hint:
    Array
*/

#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1)
        return 1; // so the first 2 index will return 1 good logic
    return fibonacci(n-1) + fibonacci(n-2);
}

int arr[100] = {'\0'};
int fib_improved(int n) {
    if (n <= 1)
        return 1;
    if (arr[n] != '\0')
        return arr[n]; // to solve repeated recursion use arrays think about it :)
    arr[n] = fib_improved(n -1) + fib_improved(n-2);
    return arr[n];
}

int main() {
    int n;
    cin >> n;
    // cout << fibonacci(n) << "\n";
    cout << fib_improved(n) << "\n";
    return 0;
}

/*
 fibonacci(50) will take really long time to compute:
 because there is 2 recursions ie;
 also if you draw a tree of those recursions we can find that 
        50
        / \
      49   48
     / \   / \
   48  47 47 46

 here there is repetition of recursions so will take more time
 ie we will take fib of 49 and all others atleast twice
*/

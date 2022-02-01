/*
    Homework 6: Get nth-prime

    ● Implement the following 2 functions:
    ● bool is_prime(int num);
        ○ Return true if number is prime
    ● Int nth_prime(int n);
        ○ Return the n-th prime number. It should use is_prime function
        ○ E.g nth_prime(6) = 13
            ■ Recall: 2, 3, 5, 7, 11, 13, 17, 19
*/

#include <iostream>
using namespace std;

bool is_prime(int num) {
    for (int i = 2; i < num; ++i) 
        if (num % i == 0) 
            return false;
    return true;
}

int nth_prime(int n) {
    int nature, prime = 0, no, i;
    if (n == 1) 
        return 2;
    else {
        prime = 1;
        for (i = 3; prime < n; ++i) {
            nature = is_prime(i); 
            if (nature) {
                ++prime;
                no = i;
            }
        }
        return no;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int i = nth_prime(n);
    cout << i << "\n";
    return 0;
}

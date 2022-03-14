/*
       Homework 15: Count primes
       
    ● Int count_primes(int start, int end);
        ○ Compute how many primes between start & end, inclusive indices
    ● Don’t use loops at all
    ● Input
        ○ 10 20 ⇒ 4
        ○ 10 200 ⇒ 42
    ● Can u compute answer for [10, 5000000]? 
*/

#include <iostream>
using namespace std;

bool is_prime(int num, int cnt = 3) {
    if (num == 2)
        return true;
    if (num <= 1 || num % 2 == 0)
        return false;
    if (num == cnt)
        return true;
    if (num % cnt == 0)
        return false;
    return is_prime(num, cnt+1);
}

int count_primes(int start, int end) {
    if (start > end)
        return 0;
    int result = count_primes(start+1, end);
    if (is_prime(start))
        ++result;
    return result;
}

int main() {
    cout << count_primes(10, 20) << "\n";
    cout << count_primes(10, 200) << "\n";
    // cout << count_primes(10, 5000000) << "\n"; for this recursion will be so deep
    // and fail
    return 0;
}

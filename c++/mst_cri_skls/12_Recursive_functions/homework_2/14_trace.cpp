/*
     Homework 14: Trace
    ● Without running code on the right
    ○ Trace by hand: What does this method do?
    ○ What happens if we swapped lines 6 & 7?
*/

#include <iostream>
using namespace std;

void do_something1(int n) {
    if (n == 0)
        return;
    cout << n % 10<< "\n";
    do_something1(n / 10);
}
void do_something2(int n) {
    if (n == 0)
        return;
    do_something2(n / 10);
    cout << n % 10 << "\n";
}

int main() {
    do_something1(123456);
    cout << "\n";
    do_something2(123456);
    return 0;
}

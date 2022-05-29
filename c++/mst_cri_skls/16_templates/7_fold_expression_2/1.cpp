#include <iostream>
using namespace std;

template<typename Function>
auto sum_square(Function operation, auto...args) {
    // it is taking square of the next number and adding themtill 0 
    return (operation(args) + ... + 0);
}

int sq(int x) {
    return x * x;
}

int main() {
    int val = sum_square(sq, 1, 2, 3, 4);
    cout << val << "\n";

    return 0;
}

#include <iostream>
using namespace std;

auto mulitply_unary_right_fold(auto...args) {
    return (args * ...);
    // 1 * (2 * (3 * 4)))
}

auto multiply_binary_right_fold(auto...args) {
    return (args * ... * 1);
    // 1 * (2 * (3 * (4 * 1))))
}

auto multiply_unary_left_fold(auto...args) {
    return (... * args);
    // ((1 * 2) * 3) * 4
}

auto multiply_bianry_left_fold(auto...args) {
    return (1 * ... * args);
    // (((1 * 1) * 2) * 3) * 4
}

int main() {
    cout << multiply_unary_left_fold(1, 2, 3, 4) << "\n"; 
    return 0;
}

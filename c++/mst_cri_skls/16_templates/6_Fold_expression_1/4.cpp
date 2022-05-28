#include <iostream>
using namespace std;

auto divide_unary_right_fold(auto...args) {
    return (args / ...);
}

auto divide_binary_right_fold(auto...args) {
    return (args / ... / 1);
}

auto divide_unary_left_fold(auto...args) {
    return (... / args);
}

auto divide_binary_left_fold(auto...args) {
    return (1 / ... / args);
}

int main() {
    cout << divide_unary_right_fold(1.0, 2.0, 3.0, 4.0) << "\n";  
    cout << divide_unary_left_fold(1.0, 2.0, 3.0, 4.0) << "\n";  

    // same :)
    cout << divide_binary_left_fold(1.0, 2.0, 3.0, 4.0) << "\n";  
}

#include <iostream>
using namespace std;

// this sum_unia blah .. are given by us and not default

// you need to specify this template before every function
template <typename ...Args>
auto sum_unary_right_fold(Args...args) {
    return (args + ...);

    /*
       (1 + (2 + (3 + 4))))
       close to variadic template right folding 

       Generation (1)  => 1 //  gives the value itself
       Generation () => +   // CE  ie; no paramter compilation error
   */
}

template<typename...Args>
auto sum_binary_right_fold(Args...args) {
    return (args + ... + 0);
    /*
       1 + (2 + (3 + (4 + 0)))

       Generation (1) => 1 + 0
       Generation ()  => 0  OK
   */
}

template<typename ... Args>
auto sum_unary_left_fold(Args...args) {
    return (... + args);
    // ((1 + 2) + 3) + 4
}

template<typename...Args>
auto sum_binary_left_fold(Args...args) {
    return (0 + ... + args);
    // (((0 + 1) + 2) + 3) + 4
}

int main() {
    int xr = sum_unary_right_fold(1, 2, 3, 4);
    cout << xr << "\n\n";  
    // int xr = sum_unary_right_fold();  // CE as told above
    // cout << xr << "\n";  

    int yr = sum_binary_right_fold(1, 2, 3, 4);
    cout << yr << "\n";
    yr = sum_binary_right_fold(); // no CE 
    cout << yr << "\n\n";  

    xr = sum_unary_left_fold(1, 2, 3, 4);
    cout << xr << "\n\n";  
    // int xr = sum_unary_left_fold();  // CE as told above
    // cout << xr << "\n";  

    yr = sum_binary_left_fold(1, 2, 3, 4);
    cout << yr << "\n";
    yr = sum_binary_left_fold(); // no CE 
    cout << yr << "\n";  

    return 0;
}

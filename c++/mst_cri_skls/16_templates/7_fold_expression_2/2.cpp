/*
   No need for initial values or 0 to end for && || and , 
   so they do not have binary folding for them only unary folding
*/

#include <iostream>
using namespace std;

bool all(auto...args) {
    return (... && args);
}
bool any(auto...args) {
    return (... || args);
}

int main() {
    cout << all(1, 1, 1) << "\n";
    cout << all(1, 0, 1) << "\n";
    cout << all() << "\n";  
    // the default value of empty expression of and is 1
    cout << any() << "\n";  // default 0

    return 0;
}

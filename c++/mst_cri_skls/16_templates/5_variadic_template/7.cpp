#include <iostream>
using namespace std;

template<typename T> 
T Sum() { return 0; }

template<typename T, typename ... Args>
T Sum(T a, Args ... args) {
    return a + Sum<T>(args ...);
    // not <T>Sum it is Sum<T>(...
}

int main() {
    cout << Sum(1, 2, 3, 4) << "\n";  
    cout << Sum(1.2, 2.3, 3.1, 4) << "\n";
    cout << Sum(1, 2.3, 3.1, 4.2) << "\n";
    cout << Sum<double>(1, 2.3, 3.1, 4.2) << "\n";  

    return 0;
}

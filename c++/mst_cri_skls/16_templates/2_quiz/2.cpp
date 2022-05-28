#include <iostream>
using namespace std;

template<class T>
T fun(T a, T b) {
    return a + b;
}

template<class T1, class T2>
T2 fun(T1 a, T1 b, T2 c) {
    return fun<T1>(a,b) * c;
}

int main() {
    cout << fun(2, 3) << " ";
    cout << fun(2, 3, 4) << " ";
    cout << fun(fun(2,3,4), -20) << "\n";  

    return 0;
}

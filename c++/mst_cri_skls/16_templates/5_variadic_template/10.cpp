#include <iostream>
using namespace std;

// don't forget this :( you will get dirty errors
void Print() {
    cout << "\n"; 
}

template<typename T>
// auto replaces the need for parameter pack
void Print(const T& a, const auto& ... args) {
    int sz = sizeof...(args);
    cout << a;
    if (sz > 0)
        cout << ", ";
    Print(args...);
}

int main() {
    Print(1, 2, 3, 4);
    Print("Mostafa", 'c', 5, 2.5);

    return 0;
}

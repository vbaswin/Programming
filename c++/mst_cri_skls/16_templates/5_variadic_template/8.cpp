#include <iostream>
using namespace std;

void Print() {
    cout << "\n"; 
}

template<typename T, typename ... Args>
void Print(T a, Args ... args) {
    int sz = sizeof...(args);

    cout << a;
    if (sz > 0)
        cout << ", ";
    Print(args ...);
}

int main() {
    Print(1, 2, 3, 4);
    Print("Mostafa", 'c', 5, 2.5);

    return 0;
}

#include <iostream>
using namespace std;

template<typename ... Args>
void Hello(int a, string name, Args ... args) {
    int sz = sizeof...(args);
    cout << a << " " << name << " " << sz << "\n"; 
}

int main() {
    Hello(1, "belal");
    Hello(1, "belal", 2.5);
    Hello(1, "belal", 2.5, "Me");

    return 0;
}

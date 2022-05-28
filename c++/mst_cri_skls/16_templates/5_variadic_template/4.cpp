#include <iostream>
using namespace std;

template<typename ... Args>
void Hello(int a, Args ... args) {
    int sz = sizeof...(args);
    cout << a << " " << sz << "\n";    
}

int main() {
    Hello(1,2,3,4,5);
    Hello(2,3,4,5);
    Hello(3,4,5);

    return 0;
}

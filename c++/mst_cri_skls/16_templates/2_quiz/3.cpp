#include <iostream>
using namespace std;

template<class T>
void fun(T a ) {
    cout << "[" << a << "]";
}

// compiler error as specialised function does not
// match the template declaration
template<>
int fun(string str) {
    cout << "{{" << str << "}}";  
    return str.size();
}

int main() {
    fun(10.5),fun("mustafa");

    return 0;
}

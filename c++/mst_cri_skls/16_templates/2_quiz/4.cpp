#include <iostream>
using namespace std;

template<class T>
void fun(T a) {
    cout << "[" << a << "]";
}

template<>
void fun(string str) {
    cout << "{{" << str << "}}";  
}

int main() {
    // the parameter "mostafa" is not a string. It is like the char array.
    // So specialized function won't be called!
    fun(10.5), fun("mostafa");
    cout << endl; 

    // now we are using string data type
    fun(10.5), fun(string("mostafa"));
    cout << endl; 

    // now we force the argument to be converted to string also
    fun(10.5), fun<string>("mostafa");
    cout << endl; 

    return 0;
}

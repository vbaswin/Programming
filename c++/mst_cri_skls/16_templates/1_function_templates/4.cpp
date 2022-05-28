#include <iostream>
using namespace std;

template<class T>
T add(T a, T b) {
    return a + b;
}

template<class T>
T multiply(T a, int factor) {
    return a * factor;
}

template<>
string multiply(string str, int factor) {
    string res = "";
    while (factor) {
        res+=str;
        --factor;
    }
    return res;
}

int main() {
    string s = "Magic";

    cout << add(10, 4) << "\n";
    cout << add(s, s) << "\n";

    cout << multiply(10,4) << "\n";
    cout << multiply(s, 4) << "\n";  

    return 0;
}

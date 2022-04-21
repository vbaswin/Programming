#include <iostream>
using namespace std;

// Hey compiler this is template. Use type
template <typename Type>
Type MyMax(Type a, Type b) {
    if (a > b)
        return a;
    return b;
}

struct Employee {};

int main() {
    cout << MyMax(2, 5) << "\n";
    cout << MyMax<int>(2, 5) << "\n";
    cout << MyMax(2.5, 5.4) << "\n";
    cout << MyMax<double>(2.5, 5.4) << "\n";
    cout << MyMax('A', 'X') << "\n";

    //cout << MyMax(2, 5.4) << "\n"
    cout << MyMax<int>(2,5.4) << "\n";
    cout << MyMax<double>(2, 5.4) << "\n";

    Employee a, b;
    //cout << MyMax<Employee>(a, b) << "\n";
    return 0;
}

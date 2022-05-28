#include <iostream>
using namespace std;

void Print() {
    cout << "\n"; 
}

// here just to refresh Args is the template PARAMETER PACK
// and args holds the actual values
template<typename T, typename ... Args>
void Print(const T& a, const Args& ... args) {
    int sz = sizeof ... (args);

    cout << a;
    if (sz  > 0)
        cout << ", ";
    Print(args...);
}

int main() {
    Print(1, 2, 3, 4);
    Print("Mostafa", 'c', 5, 2.5);

    return 0;
}

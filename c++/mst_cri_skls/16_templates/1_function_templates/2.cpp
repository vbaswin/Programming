#include <iostream>
using namespace std;

int main() {
    cout << sum(1, 10) << "\n";
    cout << sum(1,10.5) << "\n";
    cout << sum(1.2, 10.5) << "\n";
    cout << sum(1.2, 10) << "\n";
    cout << sum<int, int>(1.2, 10) << "\n";
    cout << sum('A', 1) << "\n";
    cout << sum(1, 'A') << "\n";

    // cout << sum("I am", "Mostafa") << "\n";
    cout << sum(string("I am"), string("Mostafa")) << "\n";
}

#include <iostream>
using namespace std;

int main() {
    const int size = 5;
    int numbers[size] = {10, 2, 7, 5, 3};

    numbers[0] =  9;
    numbers[2] *= 3;
    numbers[4]++;       // look at the iterating man

    cout << numbers[4] << "\n";

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    const int size {5};
    int numbers[size] {1, 2, 3, 4, 5};

    for (int i = 0; i < size; ++i) {
        cout << numbers[i] << " ";
    }
    cout << "\n";

    for (int i = 0; i < size; ++i) {
        cout << numbers[size - 1 - i] << " ";
    }
    cout << "\n";

    return 0;
}

/***************
Array of strings
***************/

#include <iostream>
using namespace std;

int main() {

    // Array of strings => each name is sequence of letters
    string name[5] = {"Mustafa Saad", "Never Ever", "Hello world"};

    for (int i = 0; i < 5; ++i) {
        cout << name[i] << "\n";
    }
}
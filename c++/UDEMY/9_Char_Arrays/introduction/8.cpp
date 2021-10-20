/************ 
input strings
************/

#include <iostream>
using namespace std;

int main() {
    string names[2];

    for (int i = 0; i < 2; ++i) {
        getline(cin, names[i]);
    }

    for (int i = 0; i < 2; ++i) {
        cout << names[i];
    }

    cout << endl;
    return 0;
}
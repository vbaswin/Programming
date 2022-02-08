#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;
// just outputing exactly what we input just an extra space 
    for(int i = 0; i < str.size(); ++i) {
        if (i != 0 && str[i - 1] != str[i])
            cout << " ";
        cout << str[i];
    }

    cout << endl;
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    char arr[10][10];    
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < n; j++) 
            arr[i][j] = '.';

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) 
            cout << arr[i][j];
        cout << "\n";
    }
}
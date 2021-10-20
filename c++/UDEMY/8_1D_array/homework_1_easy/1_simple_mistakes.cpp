#include <iostream>
using namespace std;

int main() {
    const int a = 200;
    int n, numbers[a]; cin >> n;

    for (int i = 0; i < n; ++i) 
        cin >> numbers[i];

    bool increasing = 1;
    for (int i = 1; i < n ; ++i) {
        if (numbers[i] < numbers[i - 1]) {
            increasing = 0;
            break;
        }
    }    

    if (increasing)
        cout << "Yes\n";
    else 
        cout << "No\n";

    return 0;
}


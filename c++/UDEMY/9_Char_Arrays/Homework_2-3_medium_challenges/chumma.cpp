#include <iostream>
using namespace std;

int main() {
    string a;
    cin >> a;
    int sz = a.size();

    int carry = 0;
    for (int i = 0; i < sz; i++) {
        int digit = a[sz -i -1] - '0';

        if (i < 4)
            digit += 5;
        digit += carry;
        if (digit >= 10)
            digit -= 10, carry = 1;

        a[sz -i -1] = digit + '0';
    }
    if (carry)
        cout << "1";
    cout << a << endl;

    return 0;
}
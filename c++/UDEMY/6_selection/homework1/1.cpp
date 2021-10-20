#include <iostream>
using namespace std;

int main()
{

    int A, B;
    cin >> A >> B;

    bool A_odd = A % 2 != 0;
    bool A_even = A % 2 == 0;
    bool B_odd = B % 2 != 0;
    bool B_even = B % 2 == 0;

    if (A_odd && B_odd)
        cout << A * B << "\n";
    else if (A_even && B_even)
        cout << A / B << "\n";
    else if (A_odd && B_even)
        cout << A + B << "\n";
    else if (A_even && B_odd)
        cout << A - B << "\n";

    return 0;
}
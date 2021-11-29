/*****************************************
check whether it's boolen by three methods
*****************************************/

#include <iostream>
using namespace std;

int main()
{

    int num;
    cin >> num;

    bool is_even1 = (num % 2 == 0);
    cout << is_even1 << "\n";

    bool is_even2 = (num - (num / 2)* 2 == 0);
    cout << is_even2 << "\n";

    bool is_even3 = (num % 10 % 2 == 0);
    cout << is_even3 << "\n\n";

    // sir's method

    bool is_even4 = (num % 2 == 0);
    cout << is_even4 << "\n";

    double by2 = (double)num / 2.0; // This is either x or x.5
    by2 = by2 - (int)by2;           // remove x now only 0 or 0.5
    bool is_even5 = (by2 == 0);
    cout << is_even5 << "\n";

    int last_digit = num % 10;
    bool is_even6 = last_digit == 0 || last_digit == 2 || last_digit == 4 || last_digit == 6 || last_digit == 8;
    cout << is_even6 << "\n";

    return 0;
}
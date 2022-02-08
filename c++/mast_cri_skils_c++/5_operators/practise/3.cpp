/****************
logical operators
****************/

#include <iostream>
using namespace std;

int main()
{

    int num;

    cin >> num;

    num += 1; // same as num = num + 1
    cout << "\n" <<num <<"\n";

    num -= 2;
    cout << num <<"\n";

    num *= 3;   // only that the = sign is after the operators 
    cout << num <<"\n";

    num /= 4;
    cout << num <<"\n\n";

    return 0;

}
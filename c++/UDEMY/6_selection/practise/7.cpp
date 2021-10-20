/************************************************
Read 3 integers and print the minimum one of them

First  -> simple if-else method
second -> not needed method
third  -> [most accepted and future proof method]
*************************************************/

#include <iostream>
using namespace std;

int main()
{
    
#pragma region // First simple method

    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;

    if (num1 < num2 && num1 < num3)
        cout << num1 << "\n";
    else if (num2 < num1 && num2 < num3)
        cout << num2 << "\n";
    else if (num3 < num1 && num3 < num2)
        cout << num3 << "\n";

#pragma endregion

#pragma region // 2 nd dont need method
    if (num1 < num2) {

        if (num1 < num3)
            cout << num1 << "\n";
        else
            cout << num3 << "\n";
    }
    else {
        if (num2 < num3)
            cout << num2 << "\n";
        else
            cout << num3 << "\n";
    }
#pragma endregion

#pragma region // most accepted and future use method

    int answer = num1;

    if (answer > num2)
        answer = num2;

    if (answer > num3) // else if is not possible , then the above if will be neglected if false 
        answer = num3; // and hence the answer will be wrong

    cout << answer << "\n";

#pragma endregion
    
    return 0;
}
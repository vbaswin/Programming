/******************************************************** 
Read integer N, then read N strings.
    ~> print only the strings of 2 letters
    ~> These 2 letters must be letter 'N' and letter 'O'
    
input : 9 Yss NO noOO oN Mustafa no nN oOOooo oO
output: NO oN no
********************************************************/

#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    string str;
    while (N)
    {
        cin >> str;
        if (str == "no" || str == "No" || str == "nO" || str == "NO" ||
            str == "on" || str == "On" || str == "oN" || str == "ON")
            
        cout << str << " ";
        --N;

    }

    cout << "\n";
    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    string str;
    for (int i = 1; i <= N; ++i)
    {
        cin >> str;

        if (str == "no" || str == "No" || str == "nO" || str == "NO" ||
            str == "on" || str == "On" || str == "oN" || str == "ON")
            cout << str << " ";
    }

    cout << "\n";
    
    return 0;
}
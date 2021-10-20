#include <iostream>
using namespace std;

int main()
{

    int a, b, c;
    cin >> a >> b >> c;

    if (a > 100 && b > 100 && c > 100)
        cout << -1 << "\n";
    else
    {
        if (a >= 100 && b < 100 && c < 100)
        {
            if (b < c)
                cout << c << "\n";
            else
                cout << b << "\n";
        }
        else if (b >= 100 && a < 100 && c < 100)
        {
            if (a < c)
                cout << c << "\n";
            else
                cout << a << "\n";
        }
        else if (c >= 100 && b < 100 && a < 100)
        {
            if (b < a)
                cout << a << "\n";
            else
                cout << b << "\n";
        }
        else if (a < 100 && b >= 100 && c >= 100)
            cout << a << "\n";
        else if (b < 100 && a >= 100 && c >= 100)
            cout << b << "\n";
        else if (c < 100 && a >= 100 && b >= 100)
            cout << c << "\n";
        else if (a < 100 && b < 100 && c < 100)
        {
            int answer = a;
            if (b > a)
                answer = b;
            if (c > b)
                answer = c;
                
            cout << answer << "\n";
        }

    }

    return 0;
}
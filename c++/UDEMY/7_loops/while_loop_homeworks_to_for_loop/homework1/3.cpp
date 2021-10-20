#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    for (int row = 1; row <= N; ++row)
    {
        for (int i = row; i > 0 ; --i)
        {
            cout << "*";
        }   

        cout << "\n";
    }

    return 0;
}
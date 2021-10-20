#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            if (j == i || N - i -1 == j)    // here since the value of i used are from
                cout << "*";                // i = 0 to 4 we this if condition which 
            else                            // I don't think is very appropriate in
                cout << " ";                // the long run
        }
        cout << "\n";
    }

    return 0;
}
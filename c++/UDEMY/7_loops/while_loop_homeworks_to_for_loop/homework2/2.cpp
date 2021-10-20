#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    for (int i = 0; i < N; ++i)
    {
        if (i % 8 == 0 || i % 4 == 0 && i % 3 == 0)
            cout << i << " ";
    }

    cout << "\n";
    
    return 0;
}
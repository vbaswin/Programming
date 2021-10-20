#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int j = 3;
    for (int i = 1; i <= N;)
    {
        if (j % 4 != 0)
        {
            cout << j << " ";
            ++i;
            
        }
            j += 3;
    }

    cout << "\n";

    return 0;
}
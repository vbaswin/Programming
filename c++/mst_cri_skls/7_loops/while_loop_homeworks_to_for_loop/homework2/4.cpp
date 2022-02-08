#include <iostream>
using namespace std;

int main()
{
    int T, N, num, start;
    cin >> T;

    for (int i = 1; i <= T; ++i)
    {
        cin >> N;
        
        for (int j = 1; j <= N; ++j)
        {
            cin >> num;

            if (j == 1)
                start = num;
            else if (start > num)
                start = num;
        }

        cout << start << "\n";
    }

    return 0;
}
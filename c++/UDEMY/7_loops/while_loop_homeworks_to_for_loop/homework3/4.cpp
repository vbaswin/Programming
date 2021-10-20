#include <iostream>
using namespace std;

int main ()
{
    int T, N, num;
    cin >> T;

    for (int i = 1; i <= T; ++i)
    {
        cin >> N;
        int sum = 0;

        for (int j = 1; j <= N; ++j)
        {
            cin >> num;
            int multiples = 1;

            for (int position = j; position > 0; --position)
            {
                multiples *= num;
            }

            sum += multiples;
        }

        cout << "\n"  << sum << "\n";
    }

    return 0;
}
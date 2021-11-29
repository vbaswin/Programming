#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int digits;
    int reverse = 0;
    for (int i = 0; i < N; N /= 10)
    {
        digits = N % 10;
        reverse = reverse * 10 + digits;
    }

    cout << reverse << " " << reverse * 3 << "\n";

    return 0;
}
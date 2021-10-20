/*************************************************************************
Write a program that reads number X, then other 5 numbers, print 2 values:
    ~> How many numbers <= X
    ~> How many numbers > X
    ~> Any relation between these 2 outputs?

input : 10      300 1 5 100 200
output: 2 3

>>==>> using bool to count in a very brilliant way
**************************************************************************/
#include <iostream>
using namespace std;

int main()
{

    int X, a, b, c, d, e;
    cin >> X >> a >> b >> c >> d >> e;

    int ans = 0;

    ans += (a <= X);// here bool shows 1 or 0 so we get the number of inputs which satisfies the condition
    ans += (b <= X);
    ans += (c <= X);
    ans += (d <= X);
    ans += (e <= X);

    cout << ans << " " << 5 - ans << "\n";

    return 0;
}
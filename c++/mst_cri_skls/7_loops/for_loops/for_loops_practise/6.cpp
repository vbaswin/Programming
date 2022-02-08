/***************************************** 
Fibonacci sequence

first 2 numbers: 0 1
Then each number is sum of last 2 numbers 
    ~> 0 1 1 2 3 5 8 13 21 34
*****************************************/

#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int first = 0;
    int second = 1;

    cout << first << " " << second << " ";

    for (int i = 2; i < N; ++i)     // 2 because the first 2 numbers are 0 and 1 
    {
        int sum = first + second;

        cout << sum << " ";
        first = second;
        second = sum;
    }

    cout << "\n";

    return 0;
}
/*************************************** 
Read N, M, SUM. Find all pairs that has 
A + B == SUM where
    ~> 1 <= A <= N
    ~> 1 <= B <= M
****************************************/

#include <iostream>
using namespace std;

int main()
{
    int N, M, sum;
    cin >> N >> M >> sum;

    int cnt = 0;
    for (int i = 1; i < N; ++i)
    {
        for (int j = 1; j < M; ++j)
        {
            if (i + j == sum)
            {
                ++cnt;
            }
        }
    }

    cout << "\n" << cnt << "\n";
    return 0;
}
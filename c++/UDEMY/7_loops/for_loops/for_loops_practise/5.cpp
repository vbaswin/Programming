/************************************** 
Read N, M, W. Find all triples that has
A + B <= C where
    ~> 1 <= A <= N
    ~> A <= B <= M
    ~> 1 <= C <= W
***************************************/

#include <iostream>
using namespace std;

int main()
{
    int N, M, W;
    cin >> N >> M >> W;

    int cnt = 0;
    for (int a = 1; a <= N; ++a)
        for (int b = a; b <= M; ++b)
            for (int c = 1; c <= W; ++c)
                if (a + b <= c)
                    ++cnt;

    cout << "\n" << cnt << "\n";

    

    return 0;           
}
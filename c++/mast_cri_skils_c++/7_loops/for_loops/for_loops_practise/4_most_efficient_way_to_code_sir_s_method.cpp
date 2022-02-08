#include <iostream>
using namespace std;

int main()
{
    int N, M, sum, cnt = 0;
    cin >> N >> M >> sum;

    for (int i = 1; i <= N; ++i)
    {
        int j = sum - i;            // ### "most efficient programmer" is distinguished here as he 
        if (1 <= j && j <= M)       // makes the code more faster and cleaner
            ++cnt;                  // we get the answer here in a seconds whereas in the 
    }                               // case before we are not able to get even after waiting for very
                                    // long time 
    cout << "\n" <<  cnt << "\n";

    return 0;
}
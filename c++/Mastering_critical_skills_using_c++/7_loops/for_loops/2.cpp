/*************** 
Nested for loops
****************/

#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    for (int start = 1; start <= T; ++start)    
    {
        int N;
        cin >> N;
        
        int sum = 0;
        for (int start1 = 1; start1 <= N; ++start1)
        {
            sum += start1;
        }

        cout <<"Sum from 1 to " << N << " = "<< sum << "\n";
    }

    return 0;
}
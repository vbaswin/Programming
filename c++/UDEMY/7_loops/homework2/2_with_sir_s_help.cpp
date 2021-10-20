/******************************************************** 
Read an integer N, print all numbers that satisfy 
    ~> either divisible by 8
    ~> or divisible by both 4 and 3
    
input : 100
output: 0 8 12 16 24 32 36 40 48 56 60 64 72 80 84 88 96  
********************************************************/

#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int start = 0;
    while (start < N)
    {
        if (start % 8 == 0 || start % 3 == 0 && start % 4 == 0)  // && will be first evaluated then || so no problem
        {                                                        // sir's consolidation also included
            cout << start << " ";
        }

        ++start;
    }

    cout << "\n";
    return 0;
}

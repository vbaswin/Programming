/**************************************** 
Count how many X and Y numbers such that
    ~> X in range [50 - 300]
    ~> Y in range [70 - 400]
    ~> X < Y
    ~> (X + Y) divisible by 7

output: 8040
*****************************************/

#include <iostream>
using namespace std;

int main()
{
    int cnt = 0;
    for (int x = 50; x <= 300; ++x)
    {
        int start = 70;

        if (start < x + 1)      // we saved some y iterations here
            start = x + 1;      // logic is to filter the y's that are < x and compare the x to 
                                // each y incremented; though extra steps but much faster code - #
        for (int y = start; y<= 400; ++y)      // #
                if ((x + y) % 7 == 0)
                    ++cnt;
    }

    cout << cnt << "\n";

    return 0;
}
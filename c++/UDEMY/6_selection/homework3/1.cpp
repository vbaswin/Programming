/********************************************************* 
Read number X then read 6 numbers s1, e1, s2, e2, s3, e3
    ~> these 6 numbers are for 3 interval
    ~> each interval is a range[start, end]
    ~> Number X in a range if start <= X <= end
    
print how many intervals that X is a part of

input                                       output
7       1 10        5 6         4 40     => 2
10      5 15        6 100       3 30     => 3
10      100 200     100 101     120 170  => 0
********************************************************/

#include <iostream>
using namespace std;

int main()
{
    int x, s1, e1, s2, e2, s3, e3;
    cin >> x >> s1 >> e1 >> s2 >> e2 >> s3 >> e3;

    int possibilities = 0;

    if (s1 <= x && x <= e1)
        possibilities += 1;
    if (s2 <= x && x <= e2)
        possibilities += 1;
    if (s3 <= x && x <= e3)
        possibilities += 1;
    
    cout << possibilities << "\n";

    return 0;
}
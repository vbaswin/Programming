/***************************************************************************** 
Read an integer N and M, them print NxM lines for their multiplication table.

input : 3 4
output:
    1 x 1 = 1
    1 x 2 = 2
    1 x 3 = 3
    1 x 4 = 4
    2 x 1 = 2
    2 x 2 = 4
    2 x 3 = 6
    2 x 4 = 8
    3 x 1 = 3
    3 x 2 = 6 
    3 x 3 = 9
    3 x 4 = 12
*****************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    int N_s = 1;
    while (N_s <= N)
    {                       // important to note
        int M_s = 1;        // this step should be present in this place as the # step is present 
        while (M_s <= M)
        {
            cout << N_s << " * " << M_s << " = "<< N_s * M_s << "\n";
            ++M_s;          // # step
        }

        ++N_s;
    }

    return 0;
}
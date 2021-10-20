/**********************************************************************
Read an integer N, then print an X using * as following
    ~> N is always odd

5
*   *
 * * 
  * 
 * * 
*   *

if(j == 1 || j == N - i + 1)    please take a look at this line 
                               telling the position of the * accurately
***********************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    for (int i = 1; i <= N; ++i)
    {
        for (int j = 1; j <= N; ++j)
        {
            if (j == i || j == N - i + 1) // "most brilliant method ever" try to memorise now itself
                cout << "*";
            else 
                cout << " ";
        }
        cout << "\n";
    }

    return 0;
}
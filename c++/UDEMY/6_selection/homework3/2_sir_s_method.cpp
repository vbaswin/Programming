/***************************************************************************** 
Read 4 numbers representing 2 intervals and print their intersectien interval.
If they don't intersect, print -1

input           output
1 6     3 8     => 3 6
1 15    20 30   => -1
*****************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int s1, e1, s2, e2;
    cin >> s1 >> e1 >> s2 >> e2;

    if (e1 < s2 || e2 < s1)     // e2 < s1 is for the case where 2nd interval before first
        cout << -1 << "\n";     // eg 20 30     1 15    => -1
    else 
    {
        if (s1 < s2) s1 = s2;   // :) simple way of representing one line if
        if (e1 > e2) e1 = e2;
        
        cout << s1 << " " << e1 << "\n";
    }


    return 0;
}
/*************************************************************************** 
Read an integer N, then read N <= 200 integers. Find the value that reapated
the most number of times.
    ~> each integer is -500 <= value <= 270

input : 7   -1 2 -1 3 -1 5 5
output: -1 reapeated 3 times
****************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int n, x, frequency[771] {0};   // initialize with zeros. Not possible for
    cin >> n;                       // other values eg 1 this way

    for (;n; --n) {
        cin >> x;
        frequency[x+500]++;         // shift all the values to positive 
    }                               // [imp step]

    int max_freq = 0;
    for (int i = 1; i < 771; ++i) {
        if (frequency[max_freq] < frequency[i])
            max_freq = i;
    }

    cout << max_freq - 500 << " repeated " << frequency[max_freq] << " times " << endl;
                    // don't forget to return the value to it's initial 
    return 0;       // state
}
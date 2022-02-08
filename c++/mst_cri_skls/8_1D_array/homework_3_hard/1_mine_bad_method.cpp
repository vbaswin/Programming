/**************************************************************************** 
<<===============>>
RECAMAN'S SEQUENCE
<<===============>> 

The first terms of this sequence are 0, 1, 3, 6, 2, 7, ...
    ~> So the last term value is 7 and its index is 5 (zero-based)
C    ~> The next value is either:
        => lastValue - lastIndex -1 if the following conditions are satisfied
            -> value > 0 and it did not appear before
            -> eg: 7 last value - last index 5 - 1 = 7-5-1 = 1(>0 but already
                                                                exists)
        =>  OR lastValue + lastIndex + 1 = 7+5+1 = 13
Read integer zero-based index ([1, 200]) and print the value of this index
    eg: 6 => 13     9 => 21     17 => 25
don't use nested loops
the series is: 0, 1, 3, 6, 2, 7, 13, 20, 12, 21, 11, 22, 10, 23, 9, 24, 8
                                                                    25, 43
*****************************************************************************/

#include <iostream>
using namespace std;

int main() {
    const int N = 201;
    int n, series[N] = {0,1,3,6,2,7};

    int lastvalue, lastindex, value, exists;
    for (int i = 6; i < 201c; ++i) {
        
        lastvalue = series[i-1];
        lastindex = i-1;
        value = lastvalue - lastindex -1;
        exists = 0;
        for (int j = 0; j < i; ++j) {
            if (value == series[j]) {
                exists = 1;
            }
        }

        if (value > 0 && !(exists)) {
            series[i] = value;
        }
        else
            series[i] = lastvalue + lastindex + 1;
    }

    cin >> n;
    cout << series[n] << endl;

    return 0;
}
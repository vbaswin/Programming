/************************************************************************* 
Read an integer N, then read N (<200) integers.
output: count how many "subarrays" are "increasing" in the array.
eg: if input is 1 2 3 4
    ~> we need to find all sublists of length 1 => [1], [2], [3], [4]
    ~> all sublists of length 2 => [1,2], [2,3], [3,4]
    ~>                 length 3 => [1,2,3], [2,3,4]
    ~>                 length 4 => [1,2,3,4]

input           output
4   1 2 3 4     10      [10 sub-arrays from previous eg, all are incresing]
                                                            - lower bound
4   4 3 2 1     4       [only sub-arrays of length 1 can be considered] - 
                                                            - upper bound
4   10 20 1 5   6                                                               

Easy - 3 nested loops, Medium - 2 loops, Hard with 1 loop
***************************************************************************/

#include <iostream>
using namespace std;
 
int main() {
    int n, a[199]; // 0-based so 199

    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int result = 0;
    for (int len = 1; len <= n; ++len) { // length of the sublists incremet
    // with each iteraiton starting from 1
        for (int start = 0; start < n -len + 1; ++start) { // subtracting 
// the sublist length from the last of n to avoid accessing out of array
// for that length and it increases with each iteration
            bool is_ok = true; // to take the count
            for (int i = 1; i < len && is_ok; ++i) { // is_ok to check 
// increasing or !, if is_ok false - ! increasing we we can move to next
// sublists 
                if (a[start + i] <= a[start + i -1]) // eg: first index
// - before first index then process continues for the rest in the sublists
                    is_ok = false;
            }
            result += is_ok; // counting each sublists if ! increasing
        }
    }
    cout << result << endl;
    return 0;
}
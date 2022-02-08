#include <iostream>
using namespace std;

int main() {
    int n, a[199];
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int result = 0;
    int len = 1;
/*
lets say we have increasing series of length 2. It means we have 4*5/2
valid sub arrays. So, find each maximal sub-series and add them using
n*(n+1)/2  OR  just increment with length each line we extend it

we will count series of length > 1. later add n <<==<< because
sub-arrays are valid for length 1 but it is not for other lengths
so we neglect length 1 ie; all values - n and add it in 
the last. But for next len 2 and beyound sub-arrays we need to look 
whether it is increasing or not and then only we add the length instead of 
incrementing all, hence it is very efficient. Including i = 1, we check 
with i = 0
*/
    for (int i = 1; i < n; ++i) { 
// keep expanding the array as long as the sub-array is increasing
        if (a[i] >= a[i - 1]) {
            result += len; // no of sub-arrays = length of subarray
            ++len;  
        }
// otherwise reduce the length to 1
        else
            len = 1;
    }

    cout << result + n << endl;
    return 0;
}
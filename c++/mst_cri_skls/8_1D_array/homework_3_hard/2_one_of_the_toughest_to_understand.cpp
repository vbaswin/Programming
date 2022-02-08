/********************************************************************* 
====================
FIXED SLIDING WINDOW
====================

Read integers K and N, (where K <= N), then read N < 200 integers.
Find Sub-array (consecutive numbers) of K element that has maximum sum

input : 3 7     1 0 3 -4 2 -6 9
    Let's list all sub-arrays of length 3
    1 0 3   sum = 4
    0 3 -4  sum = -1    
    3 -4 2  sum = 1
    -4 2 -6 sum = -8
    2 -6 9  sum = 5
output: 4 6 5   (Sub-array from indices 4 to 6 has maximum of 5)
Can you do it without nested loops? There are 2 ways.
***********************************************************************/

/*********************************************************************** 
Two MOST valuable tricks that sir gave me
>>==>> 1.  should we add +1 or not, the most puzzling case
        here n - k +1 : n and k are one- based value 
        
        by the rules ,  1-based - 1-based = 0-based
                        0-based - 0-based = 0-based
                        1-based - 0-based = 1-based
                        0-based - 1-based = result could wrong as we can
                                            get -ve values too
        for conditions like i < x, x should be a one based value
        so we need to add one in this case

>>==>> 2. To verify if we have done is correct or not is to look at the 
        the minimum or lowest bound here,
        we take the value of k as 1 so it becomes like the normal array
        and check the required answer.
*************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int n, k, arr[200], max_index, max_sum = -1000000;
    cin >> k >> n;

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

// brute force method : checking in all windows 
// n - k + 1 to check till the last window and not go out of the array
// i < 1 -based value if i is 0-based => think about it 
    for (int i = 0; i < n - k + 1; ++i) {
        int sum = 0;
        for (int j = 0; j < k; ++j) {
            sum += arr[i + j]; // eg if i is 4 it will sum values with 
        }           // indexes 4, 5 and 6

        if (max_sum < sum) {
            max_sum = sum;
            max_index = i;
        }
    }

    cout << max_index << " " << max_index + k -1 << " " << max_sum << endl;
    return 0;
}
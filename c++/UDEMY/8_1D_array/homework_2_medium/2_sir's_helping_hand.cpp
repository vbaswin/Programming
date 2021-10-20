/***********************************************************************************
Read an integer N, then read N <= 200 integers [0 <= A[i] <= 500]
    ~> we will search in this array for numbers
Then read integer Q (for a number of queries), then read Q integers
    ~> for each integer, find the last occurance in the array. Print it's last index
    ~> if doesn't exit, print -1
input : 5   1 2 7 3 7   3   7 9 2
output:
    4  => 7 exits in 2 positions (2 & 4). The last is 4
    -1 => 9 doesn't exist
    1  => 2 exists only in position 1
    
Do it first with nested loops. Can you do without any nested loops
***********************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int n, q, value, a[200];
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    cin >> q;
    for (int i = 0; i < q; ++i) {
        cin >> value;
        int pos = -1;                   // just reduced a hell amount of steps
        for (int j = n; j > 0; --j){    // with this method
            if (value == a[j]) {
                pos = j;
                break;
            }
        }
        cout << pos << endl;    
    }

    return 0;
}
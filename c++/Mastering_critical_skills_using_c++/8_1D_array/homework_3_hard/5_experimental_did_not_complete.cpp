/**************************************************************************
Problem #5: longest subarray

Read integer N (< 1000) then read N numbers each is either 0 or 1.
Find the longest subarray with number of zeros = numbers of ones
    ~> You can easily implement it using 3 loops
    ~> Or with little thinking using 2 loops (even with no extra arrays)
    ~> Hard: You can implement it without any nested loops
Inputs                                      ⇒ outputs
7 1 0 0 0 1 1 1                             ⇒ 6  (e.g. 100011 or 000111)
19 1 0 0 0 0 0 1 0 1 1 0 1 0 0 0 0 0 0 1    ⇒ 8  (e.g. 00101101)

Reduction
    How may this problem be reduced to another problem: 
    longest subarray of zero sum?
**************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int n, arr[999];
    cin >> n;

    for (int i = 0; i < n; ++i) 
        cin >> arr[i];

    int  start, end, max_sum = -10000000;
    double sum, cnt, max_cnt;
    for (int i = 0; i < n ; ++i) {
        cnt = 1;
        sum = arr[i];
        for (int j = i ; j < n; ++j) {
            if (sum == cnt/2.0 && sum > max_sum) {
                max_sum = sum;
                start = i, end = j;
                max_cnt = cnt;
            }
            sum += arr[j];
            ++cnt;
        }
    }

    cout << max_cnt << endl;
    for (int i = start; i <= end; ++i) 
        cout << arr[i];
    cout << endl;
    return 0;
}


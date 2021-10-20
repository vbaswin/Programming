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
    int n;
    int a[999];

    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    int maxSubarrayLength = 0;
    int maxSubarrayStartIndex = -1;
    int maxSubarrayEndIndex = -1;

    for (int start = 0; start < n; start++) {
        int zerosCount = 0, onesCount = 0;

        for (int end = start; end < n; end++) { // end = start not forget 
            if (a[end] == 0)
            zerosCount++;
            else if (a[end] == 1) 
            onesCount++;

            if (zerosCount == onesCount) {
                int subarrayLength = end - start + 1;
                if(subarrayLength > maxSubarrayLength) {
                    maxSubarrayLength = subarrayLength;
                    maxSubarrayStartIndex = start;
                    maxSubarrayEndIndex = end;
                }
            }

        }
    }

    if (maxSubarrayLength == 0)
        cout << "NOT FOUND" << endl;
    
    else {
        cout << maxSubarrayLength << endl;

        for (int i = maxSubarrayStartIndex; i <= maxSubarrayEndIndex; i++)
            cout << a[i] << " ";
        cout << endl;
    }

    return 0;

}
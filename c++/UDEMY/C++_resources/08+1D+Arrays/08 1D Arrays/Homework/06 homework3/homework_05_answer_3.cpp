#include <iostream>
using namespace std;

/*
input					1  0 0 0 0 0 1 0 1 1 0 1 0 0 0  0  0  0  1
# of zeros			0  1 2 3 4 5 5 6 6 6 7 7 8 9 10 11 12 13 13
# of ones			1  1 1 1 1 1 2 2 3 4 4 5 5	5 5  5  5  5  6
zeros - ones    0	-1 0 1 2 3 4 3 4 3 2 3 2 3 4 5  6  7  8  7
first time    	 x	x  x x x x x                 x  x  x  x  

Observe:
 Whenever the same difference appear, it means the subsequence
 between these 2 positions must have the same #zeros = #ones
 
 It has a sense close to accumulation array difference
*/

int main() {

	int n;
	int a[1000];	// actually 999
	int difference[1000*2+1];	// maximum 2000 values with shift 1000

	// mark the difference as never appeared
	for (int i = 0; i < 2001; ++i)
		difference[i] = 999999;

	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> a[i];

	int maxSubarrayLength1 = 0;
	int maxSubarrayStartIndex1 = -1;
	int maxSubarrayEndIndex1 = -1;

	int added = 0;

	difference[0+1000] = -1;	// difference 0 appears before the array (-1)

	for (int i = 0; i < n; i++)
	{
		if(a[i] == 1)
			added += 1;
		else
			added -= 1;

		int shift = added + 1000;	// shift to make sure positive

		if(difference[shift] == 999999)
			difference[shift] = i;	// first time for such accumulated difference to appear
		else {
			int subarrayLength = i - difference[shift];

			if (subarrayLength > maxSubarrayLength1) {
				maxSubarrayLength1 = subarrayLength;
				maxSubarrayStartIndex1 = difference[shift]+1;
				maxSubarrayEndIndex1 = i;
			}
		}
	}

	if (maxSubarrayLength1 == 0)
		cout << "NOT FOUND" << endl;
	else {
		cout << maxSubarrayLength1 << endl;
		for (int i = maxSubarrayStartIndex1; i <= maxSubarrayEndIndex1; i++)
			cout << a[i] << " ";
		cout << endl;
	}
	// By adding 0 as -1 values, each group of equal ones and zeros
	// is actually sub-array of sum zero


	return 0;
}

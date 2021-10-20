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

	// simply we try all start and end indices of subarrays
	for (int start = 0; start < n; start++) {
		for (int end = start; end < n; end++) {
			int zerosCount = 0;
			int onesCount = 0;

			// another loop to count zeros and ones in subarray [start, end]
			for (int i = start; i <= end; i++) {
				if (a[i] == 1)
					onesCount++;
				else if (a[i] == 0)
					zerosCount++;
			}
			if (zerosCount == onesCount) {
				int subarrayLength = end - start + 1;

				if (subarrayLength > maxSubarrayLength) {
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

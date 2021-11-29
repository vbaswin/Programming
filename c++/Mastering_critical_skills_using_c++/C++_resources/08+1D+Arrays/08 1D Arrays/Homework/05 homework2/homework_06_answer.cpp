#include <iostream>
#include <cassert>
using namespace std;

int main() {
	int n;
	cin >> n;
	const int MAX = 500 + 1;
	int frequency[MAX] = { 0 };

	// Given the values are small
	// We can count the frequency of each value
	// Then we iterate from small to big
	// If the frequency of a value is 3, we print it 3 times (line 24-26)

	for (int i = 0; i < n; i++) {
		int value;
		cin >> value;
		assert(0 <= value && value <= 500);
		frequency[value]++;
	}

	for (int i = 0; i < MAX; ++i) {
		while(frequency[i]) {
			--frequency[i];
			cout<<i<<" ";
		}
	}
}

// This is called count sort algorithm. The most efficient if values are small :)

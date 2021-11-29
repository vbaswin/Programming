#include <iostream>
#include <cassert>
using namespace std;

int main() {
	int arr[999];	// < 1000 = 999 elements

	int n;   // assume n > 0
	cin >> n;

	// Let's do it first with an array
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	// As the list is sorted, it is enough to check if an element as same as the previous or not
	// if equal, then duplicate. If not, then it is the first of its value!
	// Always make use of the given information :)
	cout<<arr[0]<<" ";
	for (int i = 1; i < n; i++) {
		assert(arr[i] >= arr[i-1]);  // make sure input is ordered

		if (arr[i] != arr[i-1])
			cout << arr[i]<<" ";
	}
	return 0;
}

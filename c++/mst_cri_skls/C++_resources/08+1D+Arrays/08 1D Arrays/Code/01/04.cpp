#include<iostream>
using namespace std;

int main() {
	int val1 = 100;
	int val2 {100};	// Single integer of value 100


	// array of 100 integers: first number is 5, remain zeros
	int arr1 [100] = {5};	// C style
	int arr2[100] {5};		// C++ initalization list style

	int arr3[] {1, 2, 3};	// auto size

	return 0;
}

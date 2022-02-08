#include <iostream>
#include <cassert>
using namespace std;

int main() {
	int n;
	cin >> n;
	// Again, mark in an array to know if visited or not! No nested loops!
	const int MAX = 500 + 1;
	int is_visited[MAX] = { 0 };

	for (int i = 0; i < n; i++) {
		int value;
		cin >> value;
		assert(0 <= value && value <= 500);

		if (!is_visited[value])
			cout<<value<<" ";
		is_visited[value] = 1;
	}
}

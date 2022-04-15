#include <iostream>
using namespace std;

int max(int a, int b) {
	if (a > b)
		return a;
	return b;
}

double max(double a, double b) {
	if (a > b)
		return a;
	return b;
}

int main() {
	cout << max(2, 5) << "\n";		// 5
	cout << max(2.5, 5.4) << "\n";	// 5.4

	return 0;
}

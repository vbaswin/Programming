#include <iostream>
using namespace std;

template<class Type1, class Type2>
Type1 sum(Type1 a, Type2 b) {
	Type1 r = a + b;
	return r;
}

int main() {
	cout << sum(1, 10) << "\n";			// 11
	cout << sum(1, 10.5) << "\n";		// 11
	cout << sum(1.2, 10.5) << "\n";		// 11.7
	cout << sum(1.2, 10) << "\n";				// 11.2
	cout << sum<int, int>(1.2, 10) << "\n";		// 11
	cout << sum('A', 1) << "\n";		// B
	cout << sum(1, 'A') << "\n";		// 66

	//cout << sum("I am", "Mostafa") << "\n";		// CE: char*
	cout << sum(string("I am "), string("Mostafa")) << "\n";	// I amMostafa


	return 0;
}

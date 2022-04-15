#include <iostream>
using namespace std;

// Hey compiler this is template. Use Type
template<typename Type>
Type MyMax(Type a, Type b) {
	if (a > b)
		return a;
	return b;
}

struct Employee {

};

int main() {
	cout << MyMax(2, 5) << "\n";				// 5: Guessed as int
	cout << MyMax<int>(2, 5) << "\n";			// 5
	cout << MyMax<double>(2.5, 5.4) << "\n";	// 5.4
	cout << MyMax('A', 'X') << "\n";			// X

	//cout << MyMax(2, 5.4) << "\n";			// CE: Can't guess
	cout << MyMax<int>(2, 5.4) << "\n";			// 5
	cout << MyMax<double>(2, 5.4) << "\n";		// 5.4

	Employee a, b;
	//cout << MyMax<Employee>(a, b) << "\n";	// CE: can't compare

	return 0;
}

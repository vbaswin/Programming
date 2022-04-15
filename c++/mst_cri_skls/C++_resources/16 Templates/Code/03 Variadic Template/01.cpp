#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// typename ... SomeArgs: template parameter pack NOT a type
// args is called a function parameter pack

template<typename ... SomeArgs>
void Hello(SomeArgs ... args) {
	int sz = sizeof...(args);
	cout << sz<<" "<<__PRETTY_FUNCTION__ << "\n";
}

int main() {
	// 4 void Hello(SomeArgs ...) [with SomeArgs = {int, int, int, int}]
	Hello(1, 2, 3, 4);
	// 3 void Hello(SomeArgs ...) [with SomeArgs = {const char*, int, double}]
	Hello("Mostafa", 5, 2.5);
	// 1 void Hello(SomeArgs ...) [with SomeArgs = {char}]
	Hello('c');
	// 0 void Hello(SomeArgs ...) [with SomeArgs = {}]
	Hello();

	return 0;
}

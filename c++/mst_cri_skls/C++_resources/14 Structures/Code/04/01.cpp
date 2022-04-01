#include <iostream>
#include <cmath>
#include <map>
using namespace std;

// Aggregate class:
// public/No constructors/no virtual/inheritance/no in-class initializers
struct Employee {
	int id;			// Default initialization = garbage
	string name;	// Default initialization => call constructor = ""
};

int main() {
	int ff = {};

	Employee e1;	// Default initialization
	Employee e2();	// FUNCTION
	Employee e3{};	// value initialization

	// temporary object with () or {} => Value initialization
	Employee();
	Employee{};

	Employee e4 {10, "Mostafa"};			// Aggregate initialization
	char arr5[] {'h', 'e', 'l', 'l', 'o'};	// Aggregate initialization


	char arr1[] = "hello";		// Copy initialization
	char arr2[] = {"hello"};	// Copy initialization
	char arr3[] {"hello"};		// Direct initialization (MORE efficient)
	char arr4[] ("hello");

	int x0;		// Default initialization for primitives = garbage
	int x1 = 5;	// Copy initialization
	int x2(5);	// Direct initialization
	int x3{5};	// Direct initialization

	int y1 {};	// value initialization for primitives = 0
	int y2();	// FUNCTION!

	double z = 10;
	int z1 = z;
	// warning: narrowing conversion of ‘z’ from ‘double’ to ‘int’ [-Wnarrowing]
	int z2 {z};	// warning or CE



	return 0;
}

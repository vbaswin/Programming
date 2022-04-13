/*
   Uniform initialization: here primitives
*/
#include <iostream>
using namespace std;

int main() {
    char arr1[] = "hello";   // copy initialization
    char arr2[] = {"hello"}; // copy initialization
    char arr3[] {"hello"};   // Direct initialization (MORE EFFICIENT)
    char arr4[] ("hello");

    int x0;         // Default initialization for primitives = garbage
    int x1 = 5;     // copy initialization
    int x2{5};      // Direct initialization
    int x3(5);      // Direct initialization
    
    int y1 {};      // value initialization for primitives = 0
    int y2();       // FUNCTION! // warning shows

    double z = 10;
    int z1 = z; // doesn't show a warning even if there is data loss
    // warning: narrowing conversion of 'z' from 'double' to 'int'
    // [-Wnarrowing]
    int z2 {z}; //warning or CE (compiler error)

    return 0;
}

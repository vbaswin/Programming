/* 
NULL POINTER is a pointer which points nothing.

uses
a) To initialize a pointer variable when that pointer
variable isn’t assigned any valid memory address
yet.
b) To pass a null pointer to a function argument
when we don’t want to pass any valid memory
address.
c) To check for null pointer before accessing any
pointer variable. So that, we can perform error
handling in pointer related code e.g. dereference
pointer variable only if it’s not NULL.

*/

#include <stdio.h>

int main() {
    int *p = NULL; // initialize the pointer as null
    printf("The value of pointer is = %u\n", p);// >>==>> "%u" is used 
    return 0;   // for null pointer formatter 
}
/* 
Basics of pointer
*/

#include <stdio.h>
int main() {
    int var = 5;
    printf("var: %d addres: %p\n", var, &var); // address is not %d
    // but >>==>> "%p"
    return 0;
}
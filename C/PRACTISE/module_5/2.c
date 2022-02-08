#include <stdio.h>

int main() {
    int *p;
    int var = 5;
    p = &var;
    printf("%d %p %p %d %d %p\n", var, &var, p, p, *p, &p);


    *p = 22;
    printf("%d\n", var); // we can change the value of the 
    // varible by using * at the pointer side as 
    // >>=> *p gives the value of the varibale 
    // >>==> p gives address of variable
    return 0;
}
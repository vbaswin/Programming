#include <stdio.h>
int main()  {
    int x[4];
    for (int i = 0; i < 4; i++) 
        printf("x[%d] = %p\n", i , &x[i]);
    printf("Address of array x: %p\n", x);
    return 0;
}
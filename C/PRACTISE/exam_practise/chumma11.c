#include <stdio.h>
int main() {
    int x[5] = {1, 2, 3, 4, 5};
    int *ptr = &x[2];
    printf("%d\n", *ptr);
    printf("%d\n", *(ptr+1));
    printf("%d\n", *(ptr-1));
    return 0;
}
#include <stdio.h>

int main() {
    int x[5] = {1, 2, 3, 4, 5};
    int *ptr = &x[2];
    printf("%d ", *ptr);
    printf("%d ", *(ptr+ 1));
    printf("%p ", ptr+ 1);
    printf("%d\n", *(ptr+ 2));
    printf("%p\n", ptr+ 2);
    return 0;
}
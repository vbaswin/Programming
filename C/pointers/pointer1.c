#include <stdio.h>

int main() {
    int new = 7;
    int *ptr = &new;
    printf("%p\n%d\n%p\n%d\n", ptr, ptr, *ptr, *ptr);
    *ptr = 22;
    printf("\n\n%p\n%d\n", *ptr, *ptr);
    printf("\n\n%p\n%p\n%d\n", &ptr, ptr, *ptr);

    int asw = 100;
    int *hi;
    hi = &asw;
    printf("\n\n%p\n%p\n%d\n", &hi, hi, *hi);
    return 0;
}

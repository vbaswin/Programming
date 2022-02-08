#include <stdio.h>

int main() {
    int a[4] = {1, 2, 3, 4};
    int* p = a;
    printf("%p\n%p\n%p\n%d\n%d\n", &p, p, &a, *p, a);
    printf("\n\n%p\n%d\n%d\n%d\n%d\n", p[0], p[0], p[1], p[2], p[3]);
    printf("\n\n%p\n%p\n%p\n%p\n", &a+0, &a+1, p+2, &a+3);
    printf("\n\n%d\n%d\n%d\n%d\n%d\n", *a, *(a+1), *a+2, *(a+3), *(a-2));

    return 0;
}

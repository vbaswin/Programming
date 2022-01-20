#include <stdio.h>

int main() {
    int a[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int (*p)[3];
    p = a;
    printf("%p\n%p\n%p\n%p\n%p\n%p\n", &a, &a+1, &a+2, (&a+1), (&a+1)+1, (&a+1)+2);
    printf("\n\n%d\n%d\n%d\n%d\n%d\n%d\n", *(*a), *(*a+1), *(*a+2), *(*(a+1)), 
    *(*(a+1)+1), *(*(a+1)+2));
    return 0;
}

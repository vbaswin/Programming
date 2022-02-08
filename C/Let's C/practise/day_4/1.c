#include <stdio.h>

int main() {
    int a[10] = {0};
    int* p;
    a[3] = 9;

    p = a;

    printf("%d", p[3]);
    return 0;
}
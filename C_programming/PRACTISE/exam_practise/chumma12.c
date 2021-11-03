#include <stdio.h>
int swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
    return *a, *b;
}
int main() {
    int a = 100, b = 200;
    swap(&a, &b);
    printf("%d %d", a, b);
    return 0;
}
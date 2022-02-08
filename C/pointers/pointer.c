#include <stdio.h>

int main() {
    int x = 1;
    printf("%p\n", &x);
    printf("%p\n", x);
    printf("%d\n", &x);
    printf("%d\n", x);
}

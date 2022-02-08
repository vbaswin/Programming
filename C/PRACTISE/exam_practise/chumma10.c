#include <stdio.h>
int main() {
    int x[6], sum = 0;
    for (int i = 0; i < 6; i++) {
        scanf("%d", x+i); // same as &x[i]
        sum += *(x+i);
    }
    printf("%d\n", sum);
    return 0;
}
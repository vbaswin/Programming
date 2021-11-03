#include <stdio.h>
int factorial(int num) {
    int fact = 1;
    if (num != 0) {
        fact = fact * num * factorial(num-1);
    }
    return fact;
}
int combn;
int nCr(int n, int r) {
    combn = factorial(n)/ (factorial(r) * factorial(n-r));
    return combn;
}

int main() {
    int n, r;
    scanf("%d %d", &n, &r);
    nCr(n, r);
    printf("%d\n", combn);
    return 0;
}
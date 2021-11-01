#include <stdio.h>
int fact = 1;
int factorial(int num) {
    if (num != 0) {
        fact = fact * num * factorial(num - 1);
    }
    return fact;
}

int main() {
    int num;
    scanf("%d", &num);
    factorial(num);
    printf("%d", fact);
    return 0;
}
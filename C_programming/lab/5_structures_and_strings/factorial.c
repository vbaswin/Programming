/*************************************
Find the factorial of a natural number
*************************************/

#include <stdio.h>

int factorial (int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

void main() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    if (num < 0) 
        printf("wrong input\n");
    else if (num == 0)
        printf("%d\n", num + 1);
    else 
        printf("Factorial is: %d\n", factorial(num));
}
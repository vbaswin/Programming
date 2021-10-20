/* 
Recursion funciton 
*/

#include <stdio.h>
int sum(int n);
int n;
int main() {
    printf("Enter a number ");
    scanf("%d", &n);
    int result = sum(n);
    printf("Sum = %d\n", result); // if performance is vital 
    // use loops as recursion is usually much slower
    return 0;
}

int sum(int n) {
    if (n != 0) 
        return n + sum(n - 1);
    else 
        return n;
}


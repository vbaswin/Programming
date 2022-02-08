/* 
No arguments passed and no return value
*/

#include <stdio.h>
int primenumber(int a);
int n, is_prime = 1;
int main() {
    printf("Enter the number: ");
    scanf("%d", &n);
    primenumber(n);
    
    if (is_prime)
        printf("YES\n");
    else 
        printf("NO\n");
    return 0;
}

int primenumber(int a) {
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            is_prime = 0;
            break;
        }
    }
    return is_prime;
}
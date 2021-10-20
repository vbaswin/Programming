/*****************************************
Check whether the given no is prime or not
******************************************/

#include <stdio.h>

int main() {
    int n;
    int prime = 1;
    printf("Enter the number: ");
    scanf("%d", &n);
    if(n == 1)
        printf("1 Not a prime number\n");
    else if(n == 2)
        printf("2 is a prime number\n");
    else {
        for (int i = 2; i < n -1;++i) {
            if (n % i == 0){
                prime = 0;
                break;
            }
        }
        
        if (prime == 1)
            printf("%d is a prime number\n",n);
        else if(prime == 0)
            printf("%d is not a prime number\n",n);
    }

    return 0;
}
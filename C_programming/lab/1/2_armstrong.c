/********************************************************************
Find whether the given no is armstrong or not
armstrong no : sum of the cubes of the digits of the number = number
eg : 0, 1, 153, 370, 407...
********************************************************************/

#include <stdio.h>

int main() {
    int nm, num, sum = 0, last_digit;
    
    printf("Enter the number: ");
    scanf("%d",&nm);
    sum = 0;
    for(num = nm;num != 0; num /= 10) {
        last_digit = num % 10;
        sum += last_digit * last_digit *last_digit;
    }

    if(nm == sum)
        printf("%d is armstrong.\n",nm);
    else
        printf("%d is NOT armstrong.\n",nm);

    return 0;
}
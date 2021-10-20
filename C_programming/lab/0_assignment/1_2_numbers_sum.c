// sum of two numbers


#include <stdio.h>

int main() {

    float a,b,sum;
    printf("Enter two numbers: ");
    scanf("%f %f",&a,&b);
    sum = a + b;
    printf("%1.2f + %1.2f = %1.2f\n",a,b,sum);

    return 0;   
}
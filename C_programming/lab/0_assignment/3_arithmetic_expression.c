// evaluate the arithmetic expression


#include <stdio.h>

int main() {

    float a,b,c,d,e,f,g;
    printf("Enter the values for a, b, c, d, e, f, g: ");
    scanf("%f %f %f %d %f %f %f",&a,&b,&c,&d,&e,&f,&g);
    float x = (a - (b/c) * d + e) * (f + g);
    printf("Solution for x is %5.3f\n",x);         // %5.3 il 5 shows the minimum digits (including the decimal point) to include in the answer
                                                    // if we put 7.3, we need 7 min digits but the answer should only 3 decimal point so
    return 0;                                       // so the output will have a space at the front to satisfy this condition
}
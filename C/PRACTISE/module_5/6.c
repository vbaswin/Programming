/* 
CALL BY REFERENCE - imp
~~~~~~~~~~~~~~~~~
*/
#include <stdio.h>
int sum_v(int x, int y);
int sum_r(int *x, int *y);
int main() {
    int num1, num2, s_v, s_r;
    scanf("%d %d", &num1, &num2);
    s_v = sum_v(num1, num2); // call by value not affect the actual 
    // x and y after #
    s_r = sum_r(&num1, &num2); // call by reference affect the 
    // actual value of *x and *y after ##
    printf("s_v = %d\ts_r = %d\n", s_v, s_r);
    printf("num1 = %d\tnum2 = %d\n", num1, num2);
    return 0;
}

int sum_v(int x, int y) {
    int sum;
    sum = x + y;
    x = x + 10; // #
    y = y + 10;
    return sum;
}
int sum_r(int *x, int *y) {
    int sum;
    sum = *x + *y;
    *x = *x + 10; // ##
    *y = *y + 10;
    return sum;
}
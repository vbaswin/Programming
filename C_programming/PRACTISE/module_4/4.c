/* 
passing array to a function
*/

#include <stdio.h>

void display(int a, int b) {
    printf("%d\n", a);
    printf("%d\n", b);
}

int main() {
    int ageArray[] = {1 , 2, 3, 4};
    display(ageArray[1], ageArray[3]);
    return 0;
}

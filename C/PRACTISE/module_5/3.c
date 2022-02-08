/* 
Relationship between arrays and pointers
*/

#include <stdio.h>

int main() {
    int arr[4];
    for (int i = 0; i < 4; i++)
        printf("& of arr[%d] is %p\n", i , &arr[i]);
    printf("adderes of arr x: %p\n", arr);
    return 0;
}
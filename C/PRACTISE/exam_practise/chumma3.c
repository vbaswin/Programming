/* 
Write a C program to check whether the given matrix is
a diagonal matrix 
*/
#include <stdio.h>
int main() {
    int arr[3][3] = {{1,0,0},{0,1,0},{0,0,1}};
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (i != j && arr[i][j] != 0) {
                printf("Not a diagonal matrix\n");
                return 0;
            }
        }
    }
    printf("Is a diagonal matrix\n");
    return 0;
}

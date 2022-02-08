/* 
Write a fn in C which takes a 2-D array storing a matrix of 
numbers and the order of the matrix(no of rows and columns)
as arguments and displays the sum of the elements stored in each 
row 
*/

#include <stdio.h>
void sum (int arr[2][3], int r, int c) {
    for (int i =0; i < r; i++) {
        int sum = 0;
        for (int j = 0; j < c; j++) {
            sum += arr[i][j];
        }
        printf("Sum of row %d = %d\n", i+1, sum);
    }
}
int main() {
    int arr[2][3] = {{1, 2, 3},
                    {4, 5, 6}};
    int r = 2, c = 3;
    sum (arr, 2, 3);
    return 0;
}
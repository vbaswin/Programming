/* 
Write a fn in C which takes the address of a single dimensional
array(containing finite sequence of numebers) and the number of 
numbers stored in the array in reverse order.Use pointers to 
access the elements of the array
*/
#include <stdio.h>

void reverse(int *arr, int n) {
    for (int i = 0; i < n /2; i++) {
        int tmp = arr[i];
        arr[i] = arr[n - 1 -i];
        arr[n-1-i] = tmp;
    }
}

int main() {
    int arr[20] = {10, 20, 30, 40, 50}, n = 5;
    reverse(arr, n);

    for (int i = 0; i < n; i++) 
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
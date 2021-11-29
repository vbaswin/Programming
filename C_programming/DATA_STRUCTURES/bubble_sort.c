/*
bubble sort using functions 
*/

#include <stdio.h>

void bubble_sort(int arr[], int n) {
    /* you dont need to specify the length of the array while 
    declaring the function if just need to know that you are 
    inputting an int array */
    for (int pass = 0; pass < n - 1; pass++) {
        for (int comp = 0; comp < n -1 -pass; comp++) {
            if (arr[comp] > arr[comp + 1]) {
                int tmp = arr[comp];
                arr[comp] = arr[comp + 1];
                arr[comp + 1] = tmp;
            }
        }
    }
}

int main() {
    int arr[10],n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    bubble_sort(arr, n);

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");
    return 0;
}
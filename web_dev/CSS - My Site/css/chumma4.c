/* Bubble sort */
#include <stdio.h>
void bubblesort(int arr[5], int n) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            if (arr[j] > arr[j+1]) {
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
    
}
int main() {
    int arr[5] = {60, 50, 40, 30, 20};
    int n = sizeof(arr)/sizeof(arr[0]);

    bubblesort(arr, n);
    for (int k = 0; k < 5; k++) 
        printf("%d ", arr[k]);
    printf("\n");
    return 0;
}
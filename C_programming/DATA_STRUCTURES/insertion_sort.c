/* 
Insertion sort using functions  
*/

#include <stdio.h>

void insertion_sort(int arr[], int n) {
    for (int size = 1; size < n; ++size) {
            int tmp = arr[size];
            int pos;
            for (int k = size; k > 0; --k) {
                if (arr[k - 1] <= arr[size] && arr[size] <= arr[k]) {
                    pos = k;
                    break;
                }
            }
            printf("%d\n", pos);
            for (int j = size; j > pos; --j) 
                arr[j] = arr[j - 1];
            arr[pos] = tmp;
    }
}

int main() {
    int arr[20], n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    insertion_sort(arr, n);

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");
    return 0;
}
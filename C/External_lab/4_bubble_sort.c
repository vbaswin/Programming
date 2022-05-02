#include <stdio.h>

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b; 
    *b = tmp;
}

void bubble_sort(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n -i - 1; ++j) {
            if (arr[j] > arr[j +1])
                swap(&arr[j], &arr[j+1]);
        }
    }
}

void display(int arr[], int n) {
    for (int i = 0;i < n; ++i)
        printf("%d ", arr[i]);
    printf("\n");
}

void read(int arr[], int n) {
    for (int i = 0 ; i< n; ++i)
        scanf("%d", &arr[i]);
}

int main() {
    int arr[100], n;
    scanf("%d", &n);
    read(arr, n);
    bubble_sort(arr, n);
    display(arr, n);
    return 0;
}

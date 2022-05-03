#include <stdio.h>

void read(int arr[], int n) {
    for (int i = 0; i < n; ++i)
        scanf("%d", &arr[i]);
}

void display(int arr[], int n) {
    for (int i = 0;i < n; ++i)
        printf("%d ", arr[i]);
    printf("\n");
}

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int partition(int arr[], int start, int end) {
    int pivot = arr[end];
    int j = start;
    for (int i = start; i <= end; ++i) {
        if (arr[i] < pivot) {
            swap(&arr[i], &arr[j]);
            ++j;
        }
    }
    swap(&arr[j], &arr[end]);
    return j;
}

void quick_sort(int arr[], int start, int end) {
    if (start < end) {
        int p = partition(arr, start, end);
        quick_sort(arr, start, p-1);
        quick_sort(arr, p+1, end);
    }
}

int main() {
    int n, arr[50];
    scanf("%d", &n);
    read(arr, n);
    quick_sort(arr, 0, n-1);
    display(arr, n);
    return 0;
}

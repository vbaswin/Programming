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
    int pivot = arr[start];
    int low = start;
    int high = end;
    while (low < high) {
        while (arr[low] <= pivot)
            ++low;
        while (pivot < arr[high]) 
            --high;
        if (low < high)
            swap(&arr[low], &arr[high]);
    }
    swap(&arr[start], &arr[high]);
    return high;
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

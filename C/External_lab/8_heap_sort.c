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

void heapify(int arr[], int n, int i) {
    int largest = i;
    int lc = 2*i + 1;
    int rc = 2*i + 2;

    if (arr[lc] > arr[largest] && lc < n)
        largest = lc;
    if (arr[rc] > arr[largest] && rc < n)
        largest = rc;

    if (largest != i) {
        swap(&arr[i], &arr[largest]);
        heapify(arr, n, largest);
    }
}

void heap_sort(int arr[], int n) {
    for (int i = (n/2) -1; i >= 0; --i) 
        heapify(arr, n, i);
    for (int i = n -1; i > 0; --i) {
        swap(&arr[0], &arr[i]);
        heapify(arr, i, 0);
    }
}
int main() {
    int n, arr[50];
    scanf("%d", &n);
    read(arr, n);
    heap_sort(arr, n);
    display(arr, n);
    return 0;
}

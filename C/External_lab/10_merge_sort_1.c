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

void merge(int arr[], int start, int mid, int end) {
    int i = start;
    int j = mid+1;
    int b[end-start+1];

    int k = 0;
    while (i <= mid && j <= end) {
        if (arr[i] <= arr[j])
            b[k++] = arr[i++];
        else
            b[k++] = arr[j++];
    }
    while (i <= mid)
        b[k++] = arr[i++];
    while (j <= end)
        b[k++] = arr[j++];
    for (int i = 0; i < k; ++i)
        arr[start++] = b[i];

}

void merge_sort(int arr[], int start, int end) {
    if (start < end) {
        int mid = (start+end)/2;
        merge_sort(arr, start, mid);
        merge_sort(arr, mid+1, end);
        merge(arr, start, mid, end);
    }
}

int main() {
    int n, arr[50];
    scanf("%d", &n);
    read(arr, n);
    merge_sort(arr, 0, n-1);
    display(arr, n);
    return 0;
}

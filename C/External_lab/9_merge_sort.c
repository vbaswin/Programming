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
    int n1 = mid-start+1;
    int n2 = end-mid;
    int L[n1], R[n2];

    int i, j , k;
    for (i = 0; i < n1; ++i)
        L[i] = arr[i+start];
    for (i = 0; i < n2; ++i)
        R[i] = arr[mid +i+1];
    
    i = 0, j = 0, k = start;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) 
            arr[k++] = L[i++];
        else 
            arr[k++] = R[j++];
    }
    while (i < n1) 
        arr[k++] = L[i++];
    while (j < n2)
        arr[k++] = R[j++];
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

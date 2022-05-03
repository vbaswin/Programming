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

void selection_sort(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        int smallest = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[smallest])
                smallest = j;
        }
        swap(&arr[i], &arr[smallest]);
    }
}

int main() {
    int n, arr[50];
    scanf("%d", &n);
    read(arr, n); 
    selection_sort(arr, n);
    display(arr, n);
}

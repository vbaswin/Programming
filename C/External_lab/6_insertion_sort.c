#include <stdio.h>

void insertion_sort(int arr[], int num) {
    for (int i = 1; i < num; ++i) {
        int n = arr[i];
        int j;
        for (j = i - 1; j >= 0; --j) {
            if (n <= arr[j])
                arr[j+1] = arr[j];
            else
                break;
        }
        arr[j+1] = n;
    }
}

void display(int arr[], int num) {
    for (int i = 0; i < num; ++i)
        printf("%d ", arr[i]);
    printf("\n");
}

void read(int arr[], int num) {
    for (int i = 0; i < num; ++i)
        scanf("%d", &arr[i]);
}

int main() {
    int num, arr[100];
    scanf("%d", &num);
    read(arr, num);
    insertion_sort(arr, num);
    display(arr, num);
    return 0;
}

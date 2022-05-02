#include <stdio.h>

void insertion_sort(int arr[], int num) {
    for (int i = 0; i < num; ++i) {
        int n = arr[i];
        for (int j = i - 1; j > 0; ++j) {
            if (n < arr[j])
                arr[j] = arr[j+1];
        }
        arr[j] = n;
    }
}

int main() {
    int num, arr[100];
    scanf("%d", &num);
    insertion_sort(arr, num);
    return 0;
}

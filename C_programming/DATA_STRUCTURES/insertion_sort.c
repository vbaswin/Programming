/* 
Insertion sort using functions  
*/

#include <stdio.h>

void insertion_sort(int arr[], int n) {
	for (int i = 1; i < n;i++) {
	int j = i - 1;
    	int tmp = arr[i]; 

	while (j >= 0 && arr[j] > tmp) {
		arr[j + 1] = arr[j];
		j = j - 1;
	}
	arr[j + 1] = tmp;
	i++;
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

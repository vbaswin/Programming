#include <stdio.h>

int main() {
	int arr[10], n;
	scanf("%d", &n);
	for (int m = 0; m < n; m++)
		scanf("%d", &arr[m]);
		
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n -1 -i; j++) {
			if (arr[j] > arr[j + 1]) {
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}	
	}
	
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
	return 0;
}

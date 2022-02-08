#include <stdio.h>

int main() {
	int arr[5] = {5, 3, 4, 2, 1};
	int n;
	scanf("%d", &n);
	for (int i = 0; i < 5; i++)
		if (arr[i] == n) {
			printf("The number is presen\n");
			return 0;
		}
	printf("The number is not present\n");
	return 0;
}

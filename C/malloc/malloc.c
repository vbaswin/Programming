#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter the no of elements for the array: ");
    scanf("%d", &n);
    int *p = (int*)malloc(n*sizeof(int));

    if (p == NULL) {
        printf("\nMemory not allocated\n");
        exit(0);
    }
    else {
        printf("\nMemory successfully allocated\nEnter the elements of array: ");

        for (int i = 0; i < n; ++i)
            scanf("%d", &p[i]);
        printf("\nThe elements of array are: ");
        for (int i = 0; i < n; ++i)
            printf("%d ", p[i]);
        printf("\n");
    }
    return 0;
}

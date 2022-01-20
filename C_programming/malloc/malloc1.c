#include <stdio.h>
#include <stdlib.h>

int size(int n) {
    printf("Enter the size of array: ");
    scanf("%d", &n);
    return n;
}
int* allocation(int n) {
    int *new = (int*)malloc(n*sizeof(int));
    return new;
}

void read(int *new, int n) {
    printf("Enter the elements of array: \n");
    for (int i = 0; i < n; ++i)
        scanf("%d", &new[i]);
}
void display(int *new, int n) {
    printf("\nThe elements in the array: \n");
    for (int i = 0; i <n; ++i)
        printf("%d ", new[i]);
    printf("\n");
}
int main() {
    int n;
    n = size(n);
    int *new = allocation(n);
    if (new == NULL) {
        printf("\nMemory not allocated\n");
        exit(0);
    }
    else {
        printf("\nMemory allocated successfully\n");
        read(new, n);
        display(new, n);
    }
    return 0;
}

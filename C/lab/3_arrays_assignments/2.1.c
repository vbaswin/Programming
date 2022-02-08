/************************************************ 
Search an element in an array using Linear Search 
************************************************/

#include <stdio.h>

int main() {
    int n, arr[22], number;

    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &number);
    for (int i = 0; i < n; ++i) {
        if (number == arr[i]) {
            printf("Number is present\n");
            return 0;
        }
    }

    printf("Number is not present\n");
    return 0;
}
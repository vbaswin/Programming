#include <stdio.h>

int main() {
    int arr[6], sum = 0;
    printf("Enter 6 numebers: ");
    for (int i = 0; i < 6; i++) {
        scanf("%d", arr + i); 
        // scanf("%d", &arr[i]) = scanf("%d", arr + i)
        sum += *(arr + i); 
        // ie; arr + i -> address ad *(add + i) value
    }
    printf("sum = %d\n", sum);
    return 0;
}
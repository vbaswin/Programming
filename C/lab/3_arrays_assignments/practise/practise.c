/***************************************** 
Find the average of n numbers using arrays
******************************************/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]); // u need to use & while using scanf because
// I don't know
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
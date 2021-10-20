/********************************************** 
Sort the elements in an array using bubble sort
**********************************************/

#include <stdio.h>

int main() {
    int n, arr[22];

    scanf("%d", &n);
    for (int i = 0; i < n; ++i) 
        scanf("%d", &arr[i]); 

    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n ; ++j) { 
            if (arr[i] > arr[j]) {
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    
    for (int i = 0; i < n; ++i) 
        printf("%d ", arr[i]);

    printf("\n");
    return 0;
 }
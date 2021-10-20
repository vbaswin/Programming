/********************************************** 
Sort the elements in an array using bubble sort
**********************************************/

#include <stdio.h>

int main() {
    int n, arr[22];

    scanf("%d", &n);
    for (int i = 0; i < n; ++i) 
        scanf("%d", &arr[i]); // don't forget '&' in scanf => to use the 
// orignal location of the variable and not it's copy
    
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n ; ++j) { // not j < n - 1 because 
// we already assigned j = i + 1 and hence j < n is correct 
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
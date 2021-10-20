/********************************************** 
Find the sum and average of numbers in an array
**********************************************/

#include <stdio.h>

int main() {
    int n, arr[22], sum = 0, average; // imp specify or put const int for
    // array length took hell lot of time to figure
    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }    

    average = sum / n;
    printf("Sum = %d \naverage = %d\n", sum, average);

    return 0;
}
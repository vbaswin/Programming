#include <stdio.h>
void sum(int *arr) {
    int sum1 = 0;
    for (int i = 0;i < 3; i++) 
        sum1 += arr[i];
    printf("%d\n", sum1);
}
int main() {
    int arr[3] = {3, 2, 3};
    sum(arr);
}
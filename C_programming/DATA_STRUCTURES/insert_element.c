#include <stdio.h>

int main() {
    int arr[10],n;
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) 
        scanf("%d", &arr[i]);

    int num, pos;
    scanf("%d %d", &num, &pos);
    int cur = pos - 1;
    for (int end = n; cur < end; end--) 
        arr[end] = arr[end - 1];

    arr[pos - 1] = num;

    for (int i = 0; i <= n; i++)
        printf("%d ", arr[i]);

    printf("\n");
    return 0;
}
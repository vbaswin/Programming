#include <stdio.h>
#include <string.h>
void rev(char arr[20]) {
    int n = strlen(arr);
    for (int i = 0; i < n/2; i++){
        int tmp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n -1 -i] = tmp;
    }
    for (int i = 0; i < n; i++)
        printf("%c", arr[i]);
    printf("\n");
}
int main() {
    char arr[20];
    scanf("%s", arr);
    rev(arr);
    return 0;
}
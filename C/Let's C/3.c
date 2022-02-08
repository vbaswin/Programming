#include <stdio.h>
#include <string.h>

int main() {
    char str[100000];
    scanf("%s", &str);

    char reverse[100000];
    int n = strlen(str);
    for (int i = 0; i < n; i++) {
        reverse[strlen(str) - i - 1] = str[i];
    }

    for (int i = 0; i < n; i++) {
        str[n + i] = reverse[i];
    }
    printf("%s\n", str);
    return 0;
 }
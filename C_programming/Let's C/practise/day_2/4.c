/****************************************************
length of the string using a simple one line for loop
****************************************************/

#include <stdio.h>
#include <string.h>

#define arr_len 256

int main() {
    char a[arr_len];
    fgets(a, 256, stdin);

    int len;
    for (len = 0; a[len] != '\0'; len++);
    printf("%d", len);

    return 0;
}
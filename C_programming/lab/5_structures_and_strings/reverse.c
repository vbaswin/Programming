/*************** 
Reverse a string
***************/

#include <stdio.h>
#include <string.h>

int stringreverse (char s[100], int n) {
    char rev[100];
    for (int i = 0; i < n; i++) 
        rev[n - i - 1] = s[i];
    printf("Reverse is: %s\n", rev);
}

void main() {
    char str[100];
    int len;
    printf("Enter the string: ");
    fgets(str, 100, stdin);
    for (len = 0; str[len] != '\n'; len++);
    stringreverse(str, len);
}
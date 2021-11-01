/* 
Write a C program to read an English alphabet through keyboard
and display whether the given alphabet is in upper case or in 
lower case 
*/

#include <stdio.h>

int main() {
    char c;
    scanf("%c", &c);
    if ('A' <= c && c <= 'Z')
        printf("uppercase\n");
    else if ('a' <= c && c <= 'z')
        printf("lowercase\n");
    else
        printf("wrong input\n");
    return 0;
}
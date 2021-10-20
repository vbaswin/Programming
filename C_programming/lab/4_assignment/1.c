/*********************************************************** 
Read a string (word), store it in an array and check whether
it is a palindrome word or not
***********************************************************/

#include <stdio.h>
#include <string.h>

int main() {
    char str[15];
    scanf("%s", str);

    int n = strlen(str);
    for (int i = 0; i < n/2; ++i) {
        if (str[i] != str[n - i -1]) {
            printf("Not palindrome\n");
            return 0;
        }
    }
    printf("Palindrome\n");
    return 0;
}
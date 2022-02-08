/********************************************************************* 
Read 2 strings (each one ending with a $ symbol), store them in arrays
and concatenate the strings without using library functions
*********************************************************************/

#include <stdio.h>

int main() {
    char str1[100] = {0}, str2[20] = {0};
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    int cnt;
    for (int i = 0; str1[i] != '$'; ++i) {
        cnt++;
    }

    for (int i = 0; str2[i] != '$'; ++i) {
        str1[cnt + i] = str2[i];
    }
    puts(str1);
    return 0;
}
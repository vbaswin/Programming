/***************************************************************** 
concatenating strings by putting the values of the two arrays to a 
new array
*****************************************************************/

#include <stdio.h>
#include <string.h>

#define arr_len 256

int main() {
    char a[arr_len], b[arr_len], c[2 * arr_len];

    fgets(a, arr_len, stdin);
    fgets(b, arr_len, stdin);

    int c_i = 0; // to take the count of a and then continue to b 
    for (int i = 0; a[i] != '\n'; i++) // if we change '\0' to '\n' we 
        c[c_i++] = a[i]; // can avoid the extra space 

    for (int i = 0; b[i] != '\n'; i++)
        c[c_i++] = b[i];

    c[c_i] = '\0'; // <<====<< to give the last value null to avoid
    // garbage values 
    printf("%s\n", c);

    return 0;
}
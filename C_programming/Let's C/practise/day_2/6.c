/***************************** 
Find the frequency of a string
*****************************/

#include <stdio.h>
#include <string.h>

#define arr_len 256

int main() {
     char str[arr_len];
     scanf("%s", str);

     int freq[26];

     for (int i = 0; i < 26; i++) 
         freq[i] = 0;


     for (int i = 0; str[i] != '\0'; i++) {
         char curr_i = str[i] - 65;
         freq[curr_i]++;
     }

     for (int i = 0; i < 26; i++) 
         printf("%c --> %d\n", (i + 65), freq[i]);

    printf("\n");
    return 0;
}
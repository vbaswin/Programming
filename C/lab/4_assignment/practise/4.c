/********************************************* 
strcmp() 
~ compare two strings
~ it compares 2 strings character by character.
  if strings are equal, the function returns 0.
**********************************************/

#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "abcd", str2[] = "abCd", str3[] = "abcd";
    int result;
// comparing str 1 and str 2
    result = strcmp(str1, str2);
    printf("%d\n", result);

// comparing str1 and str3
    result = strcmp(str1, str3);
    printf("%d\n", result);
    
    return 0;
}
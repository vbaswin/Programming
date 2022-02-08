/***************************************************** 
strcat()
~ concatenates (joins) two strings.
~~> the resultant string is stored in str1.
~str1[100] to avoid core dump when we join the strings.
******************************************************/

#include <stdio.h>
#include <string.h> // when we are usings functions I guess

int main() {
    char str1[100] = "This is ", str2[] = "pragramiz.com";
    strcat(str1, str2);
    puts(str1);
    puts(str2);
    return 0;
}
/* 
String reverse function
*/

#include <stdio.h>
#include <string.h>

void str_rev(char ch[20]);
int main() {
   printf("Enter the string: ");
   char str[20];
   scanf("%s", str);
   str_rev(str);
   printf("Reversed string: %s\n", str);
}

void str_rev(char ch[20]) {
   int j = strlen(ch);
   for (int i = 0; i <= j/2; i++) {
      char tmp = ch[i];
      ch[i] = ch[j - i -1];
      ch[j - i -1] = tmp;
   }
}

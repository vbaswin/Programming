/* 
Putc() -> to write a character to the file. 
*/

#include <stdio.h>
int main() {
    FILE *fp;
    fp = fopen("new.txt", "w");
    for (char ch = 'D'; ch <= 'S'; ch++)
        putc (ch, fp);
    fclose (fp);
    return 0;
}
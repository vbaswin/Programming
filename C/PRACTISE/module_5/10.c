/*
FILE POINTER

When working with ﬁles, you need to declare a pointer of type FILE.
This declaration is needed for communication between the ﬁle and
the program.

FILE *fptr; 

getc() fn -> read a character from a file that has been opened in read 
            mode by fopen() fn
*/


/* Doubt in here check once more */
#include <stdio.h>
int main() {
    FILE *fp = fopen("HelloWorld.txt", "r");
    int ch = getc(fp);
    while (ch != EOF) {
        /* To display the contents of the file on the screen */
        putchar(ch);
        ch = getc(fp);
    }
    if (feof(fp))
        printf("\nReached the end of the file.");
    else 
        printf("\nSomething gone wrong.");
    fclose(fp);
    getchar();
    return 0;
}
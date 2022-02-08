/* 
Reading and writing to a text file 
- fprintf and fscanf
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    FILE *fptr;
    fptr = fopen("aswin.txt", "w+");
    if (fptr == NULL) {
        printf("Error!");
        exit(1);
    }
    printf("Enter num: ");
    scanf("%d", &num);
    fprintf(fptr, "%d", num);
    /* fscanf(fptr, "%d", &num) */
    fclose(fptr);
    return 0;
}
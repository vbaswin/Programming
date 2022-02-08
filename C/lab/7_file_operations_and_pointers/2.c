/* 
Write a C program to open a text input file and count the number of 
characters, words and lines in it and store the result in an output
file
*/

#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp, *fp2;
    char ch, data[50];

    int lines = 0, space = 0, characters = 0, words = 0;
    fp = fopen("test.txt", "w");
    if (fp == NULL) {
        printf("ERROR");
        return 1;
    }
    printf("\nEnter the data: ");
    getchar();
    while(strlen(fgets(data, 50, stdin)) > 1) 
        fputs(data, fp);
    
    fclose(fp);
    fp = fopen("test.txt","r");
    while ((ch = fgetc(fp)) != EOF) {
        characters += 1;
        if (ch == ' ') {
            words += 1;
            space += 1;
        }
        if (ch == '\n') {
            words += 1;
            lines += 1;
        }
    }

    fclose(fp);
    printf("Characters = %d", characters);
    printf("\nSpaces = %d", space);
    printf("\nLines = %d", lines);
    printf("\nWords = %d\n", words);

    fp2 = fopen("results.txt", "w");
    if (fp2 == NULL) {
        printf("ERROR");
        return 1;
    }
    
    fprintf(fp2, "Characters = %d", characters);
    fprintf(fp2, "\nSpaces = %d", space);
    fprintf(fp2, "\nLines = %d", lines);
    fprintf(fp2, "\nWords = %d\n", words);

    fclose(fp2);
    return 0;
}
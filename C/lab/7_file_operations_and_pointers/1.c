/* 
Write a C program to create a file and perform the following:-
    a) Write data to the file 
    b) Read the data in a given file and display the content on the 
        conole.
    c) Append new data and display on console
*/

#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp;
    char data[50], append[50];

    fp = fopen("beginner.txt","w");
    if (fp == NULL) {
        printf("ERROR");
        return 1;
    }

    printf("\nEnter the text: ");
    while (strlen(fgets(data,50,stdin)) >1) 
        fputs (data, fp);

    fclose(fp);

    fp = fopen("beginner.txt","r");
    if (fp == NULL) {
        printf("ERROR");
        return 1;
    }

    printf("Reading the file: \n");
    while (fgets(data,50,fp)!= NULL) 
        printf("%s",data);
    
    fclose(fp);

    fp = fopen("beginner.txt", "a");
    
    if (fp == NULL) {
    printf("ERROR");
    return 1;
    }

    printf("\nEnter the data to append: ");
    fgets(append, sizeof(append), stdin);

    fprintf(fp, "%s", append);
    fclose(fp);
    
    fp = fopen("beginner.txt","r");
    if (fp == NULL) {
        printf("ERROR");
        return 1;
    }

    printf("\nReading the file: \n");
    while (fgets(data,50,fp)!= NULL) 
        printf("%s",data);
    
    fclose(fp);

    return 0;
}
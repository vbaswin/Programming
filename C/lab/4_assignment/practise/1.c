#include <stdio.h>

int main() {
    char c[] = "c string";
// c[5] = "abcde"; ==> We are trying to assign 6 characters(the last 
// character is '\0') to a char array having 5 characters. ===> really
// bad way of doing

//    char c[100] = "C pragramming";  ~~> error array type is not
// assignible  use the ** strcpy() ** function to copy the string instead 

    char name[20];
    scanf("%s", &name);
    printf("Your name is %s.\n", name);
    return 0;
}
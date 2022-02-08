/***************************** 
Commonly used string functions

strlen()
strcpy() 
******************************/

#include <stdio.h>
#include <string.h> // use have to do this

int main() {
    char name[30];
    fgets(name, sizeof(name), stdin); // read line of string
    printf("name: %s", name);
// ** puts() ** also can be used to display the string
    printf("name length: %zu \n", strlen(name));
    
    char name2[30];
    strcpy(name2, name);
    // printf("%s", name2);
    puts(name2); // this puts an extra line I guess

    return 0;
}
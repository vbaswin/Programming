/************************************************ 
if input aswin 
scanf -- takes 5 values
manual also 5 
but fgets takes 6 values including the \n <<===<< 
************************************************/

#include <stdio.h>
#include <string.h>

#define arr_len 256

int main() {
    char a[arr_len];
    scanf("%s", a);
    printf("%s\n", a);

    
    return 0;
}
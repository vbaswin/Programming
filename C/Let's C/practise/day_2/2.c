#include <stdio.h>
#include <string.h>

#define arr_len 256

int main() {
    char a[arr_len];
    fgets(a, 256, stdin); // if we are using fgets it will consider till
    // \n  so we do not need to specify \n in the last line <<===<<    
        
    printf("%s", a);
    
    return 0;
}
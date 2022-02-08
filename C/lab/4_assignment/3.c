/*************************************************************** 
Read a string (ending with a $ symbol), store it in an array and 
count the number of vowels, consonants and spaces in it.
***************************************************************/

#include <stdio.h>

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);

    int vowels = 0, consonants = 0, digits = 0, spaces = 0;
    for (int i = 0; str[i] != '$'; ++i) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || 
            str[i] == 'o' || str[i] == 'u' || str[i] == 'A' ||
            str[i] == 'E' || str[i] == 'I' || str[i] == 'O' ||
            str[i] == 'U') 
            ++vowels;
        else if ((str[i] >= 'A' && str[i] <= 'Z') || 
                (str[i] >= 'a' && str[i] <= 'z')) 
            ++consonants;
        else if (str[i] >= '0' && str[i] <= '9')
            ++digits;
        else if (str[i] == ' ') 
            ++spaces;
    }

    printf ("Vowels: %d\nConsonants: %d\nDigits: %d\nSpaces: %d\n", 
            vowels, consonants, digits, spaces);
    return 0;
}
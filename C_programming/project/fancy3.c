include <stdio.h>
#include <unistd.h>
#include <string.h>

void animation(char str[]) {
    char some[4];
    for (int i = 0; i < 3; ++i)
        some[i] = ' ';
    for (int i = 0; i< 3; ++i) {
        some[i] = '.';
        printf("\r%s %s", str, some);
        fflush(stdout);
        usleep(600000);
    }
}
int main() {
    char str[100] ="creating new node";
    animation(str);
    strcpy(str,"finding nearest room");
    animation(str);
    printf("\n");
    return 0;
}

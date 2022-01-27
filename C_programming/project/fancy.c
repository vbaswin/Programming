#include <stdio.h>
#include <unistd.h>

int main() {
    char symbol[72];
    for (int i = 0; i < 72; ++i)
        symbol[i] = ' ';
    symbol[0] = ' ';
    for (int i = 0; i < 72; ++i) {
        usleep(100000);
        printf("\rinstalling %s[%d%]", symbol, i);
        symbol[i] = '#';
        fflush(stdout);
    }
    printf("\n");
    return 0;
}

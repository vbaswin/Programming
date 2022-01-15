#include <stdio.h>

int main() {
    char output[100] = "1+2";
    int val = (output[2] - '0') + (output[0] - '0');
    printf("%d", val);
}

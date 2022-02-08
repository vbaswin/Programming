#include <stdio.h>
#include <unistd.h>

int main() {
    int n;
    scanf("%d", &n);
    fflush(stdin);
    for (int i = 1; i <= n; ++i) {
        sleep(1);
        printf("\r%d                      ", i);
        fflush(stdout);
    }
    return 0;
}

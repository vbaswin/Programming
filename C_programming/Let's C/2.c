#include <stdio.h>
#include <string.h>

int main() {
    char str[100], alpha;
    scanf("%s %c", &str, &alpha);

    if ('A' <= alpha && alpha <= 'Z')
        alpha = alpha - 'A' + 'a';

    int cnt = 0;
    for (int i = 0; i < strlen(str); i++) {
        if ('A' <= str[i] && str[i] <= 'Z')
            str[i] = str[i] - 'A' + 'a';

        if (alpha == str[i])
            cnt++;
    }

    printf("%d\n", cnt);

    return 0;
}





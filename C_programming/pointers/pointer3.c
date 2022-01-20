#include <stdio.h>

int main() {
    int b[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int (*ptr)[3];
    ptr = b;
    printf("\n\n%d\n%d\n%d\n%d\n%d\n%d\n", *(*b), *(*b + 1), *(*ptr + 2), *(*(b+1)),
        *(*(b+1)+1), *(*(b+1)+2));
    
    printf("\n\n%d\n%d\n", *(*b+1), *(*(b+1)+1));
    printf("\n\n%d\n%d\n", *(*ptr+1), *(*(ptr+1)+1));
    printf("\n\n%d\n%d\n", b[1][2], ptr[1][2]);
    return 0;
}

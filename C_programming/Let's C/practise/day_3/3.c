/********************** 
distance b/w two points
**********************/

#include <stdio.h>
#include <math.h>

struct point {
    int x, y;
}a, b; // the data is applicable to two people or variable

int main() {
    scanf("%d %d", &a.x, &a.y);
    scanf("%d %d", &b.x, &b.y);

    printf("%0.2f\n", sqrt(pow((a.x - b.x), 2) 
                            + pow((b.y - b.y), 2)));
    return 0;
}
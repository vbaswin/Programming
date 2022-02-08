/* 
Read two input each representing the distances between two points
in the Euclidean space, store these in structure variables and add
the two distance values
*/

#include <stdio.h>
#include <math.h>

struct dist {
    float x1,y1,x2,y2;
}d;

int main() {
    printf("Enter point 1: ");
    scanf("%f %f", &d.x1, &d.y1);
    printf("Enter point 2: ");
    scanf("%f", &d.x2, &d.y2);
    float distance = sqrt(pow((d.x2 - d.x1), 2) + pow((d.y2 - d.y1),2));
    printf("Sum of 2 distances: %0.3f\n", distance);
    return 0;
}
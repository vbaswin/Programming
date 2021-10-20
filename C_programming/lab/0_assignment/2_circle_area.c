// evaluate the area of the circle


#include <stdio.h>

int main() {
    float r;
    printf("Enter the radius of the circle: ");
    scanf("%f",&r);
    float a = (22 / 7) * r * r;
    printf("Area of the circle is: %1.2f\n",a);

    return 0;
}
#include <stdio.h>

struct aswin {
    int age;
    float weight;
};

int main() {
    struct aswin *p, new;
    p = &new;

    printf("Enter the age: \n");
    scanf("%d", &p->age);
    printf("Enter the weight: \n");
    scanf("%f", &p->weight);

    printf("\nDisplaying data\n");
    printf("%d %f\n", p->age, p->weight);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

struct person {
    int age;
    float weight;
    char name[20];
};

int main() {
    int n;
    struct person *p;
    printf("Enter no of persons: \n");
    scanf("%d", &n);

    p = (struct person*)malloc(n * sizeof(struct person));
    printf("Enter name , age and weight: \n");
    for (int i = 0; i < n; ++i)
        scanf("%s %d %f", (p + i)->name, &(p+i)->age, &(p+i)->weight);
    printf("\nDisplaying data: \n\n");
    for (int i = 0; i < n; ++i)
        printf("%s %d %0.2f\n", (p+i)->name, (p+i)->age, (p+i)->weight);
    return 0;
}

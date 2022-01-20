#include <stdio.h>
#include <stdlib.h>

struct person {
    int age;
    float weight;
    char name[20];
};
struct person* allocation(int n) {
    struct person *p = (struct person*)malloc(n * sizeof(struct person));
    return p;
}
void read(struct person *p, int n) {
    printf("\nEnter name, age & weight: \n");
    for (int i = 0; i < n; ++i)
        scanf("%s %d %f", (p+i)->name, &(p+i)->age, &(p+i)->weight);
}
void display(struct person *p, int n) {
    printf("\nDisplaying data\n\n");
    for (int i = 0; i < n; ++i)
        printf("%s %d %0.2f\n", (p+i)->name, (p+i)->age, (p+i)->weight);
    printf("\n");
}

int main() {
    struct person *p;
    int n;
    printf("Enter the no of persons: ");
    scanf("%d", &n);
    p = allocation(n);
    read(p, n);
    display(p, n);
    return 0;
}

#include <stdio.h>

struct student {
    int age;
    int id;
    float cgpa;
    char name[20];
};

int main() {
    struct student student1 = {22, 15, 7.24, "Aswin V B"};
    printf("%d %d %0.2f %s\n", student1.age, student1.id, student1.cgpa, 
            student1.name);
    return 0;
}
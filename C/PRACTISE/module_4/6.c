/* 
Add two numbers using struct

UNIONS -> are used to convert between binary representations of 
          integers and float or int & char
*/

#include <stdio.h>
struct person {
    char name[50];
    int Rollno;
    float salary;
}p[20];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Employee[%d]\n", i + 1);
        scanf("%s %d %f",p[i].name, &p[i].Rollno, &p[i].salary);
    }// >>==>> in scanf don't use 0.2f rather f only 
    
    for (int j = 0; j < n; j++) {
        printf("%s %d %0.2f\n", p[j].name, p[j].Rollno, p[j].salary);
        printf("Size of struct: %d", sizeof(p[j]));
    }

    return 0;
}
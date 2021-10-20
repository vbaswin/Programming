/****************************** 
Read and print employees record
*******************************/

#include <stdio.h>

struct employee {
    char name[30];
    int empid,salary;
}emp1;

int main() {
    fgets(emp1.name, 30, stdin);// variable declaration
    scanf("%d %d", &emp1.empid, &emp1.salary);
    printf("%s %d %d\n", emp1.name, emp1.empid, emp1.salary);

    return 0;
}

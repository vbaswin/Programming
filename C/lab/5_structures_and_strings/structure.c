/************************************* 
Print employee details using structure
*************************************/
/************************************************** 
using structure, read and print data of n employees
**************************************************/

#include <stdio.h>
#include <string.h>

struct employee {
    char name[100];
    int empid, salary;
}emp[20];

void main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Employee[%d]\nEnter name: ",i + 1);
        scanf("%s", emp[i].name);
        printf("Enter employee id: ");
        scanf("%d", &emp[i].empid);
        printf("Enter salary: ");
        scanf("%d", &emp[i].salary);
        printf("\n");
    }

    for (int i = 0; i < n; i++)
        printf("Employee[%d] %s %d %d\n",i + 1,emp[i].name, emp[i].empid,
        emp[i].salary);
}
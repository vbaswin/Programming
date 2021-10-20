/************************************* 
Print employee details using structure
*************************************/

#include <stdio.h>
#include <string.h>

struct employee {
    char name[100];
    int empid, salary;
}emp[20];

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Employee[%d]\n",i + 1);
        getchar();
        fgets(emp[i].name, 20, stdin);
        scanf("%d %d", &emp[i].empid, &emp[i].salary);
    }

    for (int i = 0; i < n; i++) {
        fputs(emp[i].name, stdout);
        printf("%d %d\n", emp[i].empid, emp[i].salary);
    }

    return 0;
}
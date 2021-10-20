/*
Question 6. 222_Aswin V B
*/

#include <stdio.h>

struct employee
{
    char name[50];
    int num;
    int experience;
    int salary;
};

int main()
{
    int n, i;
    struct employee emp[300];
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) //Input of Employee Details
    {
        printf("Enter the details of employee %d", i + 1);
        printf("\nName: ");
        scanf("%s", &emp[i].name);
        printf("ID Number: ");
        scanf("%d", &emp[i].num);
        printf("Number of years of experience: ");
        scanf("%d", &emp[i].experience);
        printf("Salary: ");
        scanf("%d", &emp[i].salary);
    }
    printf("\n");
    printf("\nDetails of employees with minimum 5 years of experience and salary less than 25000 are as follows:\n");

    for (i = 0; i < n; i++) //Printing employee details
    {
        if ((emp[i].experience >= 5) && (emp[i].salary < 25000))
        {
            printf("\nDetails of employee %d\n", i + 1);
            printf("Name: %s\n", emp[i].name);
            printf("ID Number: %d\n", emp[i].num);
            printf("Number of years of experience: %d\n", emp[i].experience);
            printf("Salary: %d\n", emp[i].salary);
        }
    }
    return 0;
}
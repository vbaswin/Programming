#include <stdio.h>
struct student {
    int roll_number;
    char name[20];
    int mark_for_C;
}std[100];
int main() {
    int n, sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d %s %d", &std[i].roll_number, std[i].name, 
                &std[i].mark_for_C);
    for (int j = 0; j < n; j++)
        sum += std[j].mark_for_C;
    int avg = sum / n;
    printf("%d\n", avg);
    return 0;
}

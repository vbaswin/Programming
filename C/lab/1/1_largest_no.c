// find the largest of the three numbers we input


#include <stdio.h>

int main() {


    float n1,n2,n3;
    printf("Enter 3 numbers: ");
    scanf("%1f %1f %1f",&n1,&n2,&n3);

    if(n1 >= n2 && n1 >= n3)
        printf("%2.1f is the largest",n1);
    else if(n2 >= n1 && n2 >= n3)
        printf("%2.1f is the largest",n2);
    else if(n3 >= n1 && n3 >= n2)
        printf("%2.1f is the largest",n3);

    return 0;
}
/*
 Program name: STACK
 Roll no: 222
 Authur name: Aswin V B
*/


#include <stdio.h>
int top, n, a[20];

void stk_display() {
    printf("\n");
    for (int i = top; 0 <= i && top != -1; i--)
       printf("%d\n", a[i]);
}

void push() {
   if (top == n - 1)
        printf("\nStack full!!\n\n");
    else {
        int val;
        printf("Enter the value: ");
        scanf("%d", &val);
        ++top;
        a[top] = val;
    }
    stk_display();
}

void pop() {
    int data;
    if (top == -1)
        printf("Empty stack\n");
    else {
        a[top] = data;
        --top;
    }
    stk_display();
}

void menu() {
    int in;
    while (1) {
        printf("\nEnter one of options\n1) push\n2) pop\n3) exit\n");
        scanf("%d", &in);
        if (in == 1)
            push();
        else if (in == 2)
            pop();
        else if (in == 3)
            break;
        else
            printf("\nIncorrect input!!\n\n");
    }
}

int main() {
    printf("Enter the size of stack\n");
    scanf("%d", &n);
    top = -1;
    menu();
}

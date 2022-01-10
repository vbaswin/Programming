/*
 Program name: Convert an expression from infix to postfix and evaluate
 Rollno: 222
 Authur name: Aswin V B
*/

#include <stdio.h>

char expn[100], output[100], stack[100];
int top = -1, k = 0;

int read_expn() {
    printf("Enter the expression: ");
    int i = 0;
    do {
        scanf("%c", &expn[i]);
        ++i;
    }while (expn[i - 1] != '\n');
    return i;
}

int precedence(char y) {
    if (y == '^')
        return 4;
    else if (y == '*' || y == '/')
        return 3;
    else if (y == '+' || y == '-')
        return 2;
    else 
        return 1;

}
void push(char x) {
    stack[++top] = x; 
}

void pop() {
    output[k++] = stack[top];
    --top;
}

int in_to_post(int cnt) {
    for (int j = 0; j < cnt; ++j) {
        if (expn[j] != '^' ||  expn[j] != '*' ||  expn[j] != '/' ||  expn[j] != '+' || 
            expn[j] != '-' ||  expn[j] != '(' ||  expn[j] != ')' ) 
            push(expn[j]);
        else if (expn[j] == '(')
            push(expn[j]);
        else if (expn[j] == ')')
    }
}

void disp_output(int cnt) {
    for (int i = 0; i < cnt; ++i)
        printf("%c", expn[i]);
}

int main() {
    int cnt = read_expn();
    in_to_post(cnt);
    disp_output(cnt); 
}

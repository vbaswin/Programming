/*
 Program name: Convert an expression from infix to postfix and evaluate
 Rollno: 222
 Authur name: Aswin V B
*/


#include <stdio.h>

char expn[100], output[100], stack[100];
int top = -1, k = 0;

int read_exp() {
    int i = 0, cnt = 0;
    printf("Enter the expression: ");
    do {
        scanf("%c", &expn[i]);
        ++i;
        ++cnt;
    }while(expn[i-1] != '\n');
    expn[i] = '\0';
    return cnt - 1;
}
void push(int x) {
    stack[++top] = x;
}
void pop() {
    output[k++] = stack[top];
    stack[top] = '\0';
    --top;
}
int precedence (char y) {
    if (y == '^')
        return 3;
    else if (y == '*' || y == '/')
        return 2;
    else if (y == '+' || y == '-')
        return 1;
}

void in_to_post(int cnt) {
    for (int j = 0; j < cnt; ++j) {
        if (expn[j] == '^' || expn[j] == '*' || expn[j] == '/' || expn[j] == '+' || 
            expn[j] == '-') {
            if (top == -1)
                    push(expn[j]);
            else {
                int p = precedence(expn[j]);
                int q = precedence(stack[top]);
                printf("%d %d", p, q);

                if (p > q) 
                    push(expn[j]);
                else if (p < q) {
                    pop();
                    
                    while (precedence(stack[top]) > precedence(expn[j]))
                        pop();
                    push(expn[j]);
                }
            }
        }
        else if (expn[j] == '(')
            push('(');
        else if (expn[j] == ')') {
            while (stack[top] != '(')
                pop();
            stack[top] = '\0', --top; 
        }
        else if (expn[j] == ' ')
            continue;
        else 
            output[k] = expn[j], ++k;

        if (top != -1) {
            while(top > -1)
                pop();
        }
    }
 
}

void disp_postfix_exp() {
    printf("\n");
   for (int i = 0; i < k; ++i)
       printf("%c", output[i]);
}
void main() {
    int cnt = read_exp();
    in_to_post(cnt);
    disp_postfix_exp();
}

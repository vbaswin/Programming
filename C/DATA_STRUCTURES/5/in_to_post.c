/*
 Program name: Convert an expression from infix to postfix and evaluate
 Rollno: 222
 Authur name: Aswin V B
*/

#include <stdio.h>
#include <math.h>

char expn[100], output[100], stack[100];
int top = -1, k = 0, stack1[100], top1 = -1;

int read_expn() {
    printf("Enter the expression: ");
    int i = 0;
    do {
        scanf("%c", &expn[i]);
        ++i;
    }while (expn[i - 1] != '\n');
    expn[i - 1] = '\0';
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
void push1(int x) {
    stack1[++top1] = x;
}

void pop() {
    output[k++] = stack[top];
    stack[top] = '\0';
    --top;
}

void in_to_post(int cnt) {
    for (int j = 0; j < cnt; ++j) {
        if (expn[j] == '^' ||  expn[j] == '*' ||  expn[j] == '/' ||  expn[j] == '+' ||  
            expn[j] == '-') {
            int p = precedence(expn[j]);
            int q = precedence(stack[top]);

            if (p > q || p == q)
                push(expn[j]);
            else {
                while (precedence(expn[j]) < precedence(stack[top]))
                    pop();
                stack[++top] = expn[j];
            }
        }
        else if (expn[j] == '(')
            push(expn[j]);
        else if (expn[j] == ')') {
            while (stack[top] != '(')
                pop();
            stack[top--] = '\0';
        }
        else if (expn[j] == ' ')
            continue;
        else 
            output[k++] = expn[j];
    }

    while (top != -1) 
        pop();
}

void disp_output() {
    for (int i = 0; i < k; ++i)
        printf("%c", output[i]);
    printf("\n");
}

void operations(char h) {
    int res;
    if(h == '^') 
        res = pow(stack1[top - 1], stack1[top]);
    else if (h == '*')
        res = stack1[top - 1] * stack1[top];
    else if (h == '/')
        res = stack1[top - 1] / stack1[top];
    else if (h == '+')
        res = stack1[top - 1] + stack1[top];
    else if (h == '-')
        res = stack1[top - 1] - stack1[top];
    stack1[top] = '\0', stack1[--top] = res;
}

int eva_post() {
   for (int m = 0; m < k; ++m) {
        if (output[m] == '^' || output[m] == '*' || output[m] == '/' ||
            output[m] == '+' ||output[m] == '-') 
            operations(output[m]); 
        else {
            int val = output[m] - '0';
            printf("%d   ", val);
            push1(val);
        }
   } 
   printf("The result is: %d", stack1[top]);
}

int main() {
    int cnt = read_expn();
    in_to_post(cnt);
    disp_output(cnt); 
    eva_post();
}

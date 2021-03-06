#include <stdio.h>
#include <ctype.h>
#include <math.h>

char infix[100], postfix[100], stack[100];
int top = -1, k = 0, top1 = -1;
float stack1[100];

void push(char ch) {
    stack[++top] = ch;
}

void pop() {
    if (top == -1)
        return;
    else 
        postfix[k++] = stack[top--];
}

int precedence(char ch) {
    if (ch == '(')
        return 0;
    else if(ch == '+' || ch == '-')
        return 1;
    else if(ch == '*' || ch == '/')
        return 2;
    else if (ch == '^')
        return 3;
}

void conversion(){
    for (int i = 0; infix[i] != '\0'; ++i) {
        char ch = infix[i];
        if (isalnum(ch))
            postfix[k++] = ch;
        else if (ch == '(')
            push(ch);
        else if (ch == ')') {
            while (stack[top] != '(')
                pop();
            --top;
        }
        else {
            while (precedence(ch) <= precedence(stack[top])) {
                if (ch == '^' && stack[top] == '^')
                    break;
                pop();
            }
            push(ch);
        }
    }
    while (top != -1)
        pop();
}

void display() {
    printf("Postfix Expression: ");
    for (int i = 0; postfix[i] != '\0'; ++i) 
        printf("%c", postfix[i]);
    printf("\n");
}

void push1(int n) {
    stack1[++top1] = n;
}

float pop1() {
    return stack1[top1--];
}
void operations(char ch) {
    float op1, op2;
    op1 = pop1();
    op2 = pop1();
    switch(ch) {
        case('^'):
            push1(pow(op2, op1));
            break;
        case('*'):
            push1(op2 * op1);
            break;
        case('/'):
            push1(op2 / op1);
            break;
        case('+'):
            push1(op2 + op1);
            break;
        case('-'):
            push1(op2 - op1);
            break;
    }
}

void evaluation() {
    for (int i = 0; postfix[i] != '\0'; ++i) {
        char ch = postfix[i];
        if (isdigit(ch)) {
            int val = ch - '0';
            push1(val);
        }
        else 
            operations(ch);
    }
    printf("Result: %0.2f\n", stack1[top1]);
}

int main() {
    printf("Enter the expression: ");
    scanf("%s", infix);
    conversion();
    display();
    evaluation();
}

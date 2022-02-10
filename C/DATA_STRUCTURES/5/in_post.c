#include <stdio.h>
#include <ctype.h>
#include <math.h>

char infix[100], postfix[100], stack[100];
int top = -1, top1 = -1, k = 0;
float stack1[100];

void read() {
    printf("Enter expression: ");
    scanf("%s", infix);
}

void push(char ch) {
    stack[++top] = ch;
}

void pop() {
    postfix[k++] = stack[top--];
}

int precedence(char ch) {
    if (ch == '(')
        return 0;
    else if (ch == '+' || ch == '-')
        return 1;
    else if (ch == '*' || ch == '/')
        return 2;
    else if (ch == '^')
        return 3;
}

void conversion() {
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
            while(precedence(stack[top]) >= precedence(ch)) {
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
    float ob1, ob2;
    ob1 = pop1();
    ob2 = pop1();
     
    switch(ch) {
        case '^':
            push1(pow(ob2, ob1));
            break;
        case '*':
            push1(ob2 * ob1);
            break;
        case '/':
            push1(ob2 / ob1);
            break;
        case '+':
            push1(ob2 + ob1);
            break;
        case '-':
            push1(ob2 - ob1);
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
    read();
    conversion();
    display();
    evaluation();
    return 0;
}

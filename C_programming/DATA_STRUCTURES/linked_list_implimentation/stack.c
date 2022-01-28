/*
 Program name: Implementation of stack using linked list
 Rollno: 222
 Authur name: Aswin V B
*/

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

struct node *top = NULL, *new, *temp;

void display() {
    if (top == NULL)
        printf("\n\tEmpty Stack!!\n");
    else {
        printf("\n\t");
        for (temp = top; temp->link != NULL; temp = temp->link)
            printf("%d --> ", temp->data);
        printf("%d", temp->data);
        printf("\n");
    }
}

void push() {
    int data;
    printf("\nEnter data to be pushed: ");
    scanf("%d", &data);
    new = (struct node *)malloc(sizeof(struct node));
    new->data = data;
    new->link = top;
    top = new;
    display();
}

void pop() {
    if (top == NULL)
        printf("\n\tEmpty Stack!!\n");
    else {
        temp = top;
        top = top->link;
        free(temp);
        display();
    }
}

void menu() {
    int choice;
    while (1) {
        printf("\nEnter one of options\n1) Push\n2) Pop\n3) Exit\n");
        scanf("%d", &choice);
        if (choice == 1)
            push();
        else if (choice == 2)
            pop();
        else if (choice == 3)
            break;
        else 
            printf("\nIncorrect input\n");
    }
}


int main() {
    menu();
}

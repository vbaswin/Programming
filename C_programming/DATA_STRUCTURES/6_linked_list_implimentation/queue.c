/*
 Program name: Implementation of queue using Singly linked list
 Rollno: 222
 Authur name: Aswin V B
*/

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
} *front = NULL, *rear = NULL, *temp, *temp;

void display() {
    if (!(front == NULL)) { 
        printf("\n\t");
        for (temp = front; temp->link != NULL; temp = temp->link)
            printf("%d --> ", temp->data);
        if (temp->link == NULL)
           printf("%d\n", temp->data);
    }
}

void enqueue() {
    int data;
    temp = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter the data to enqueue: ");
    scanf("%d", &data);
    temp->data = data;
    temp->link = NULL;
    if (front == NULL) { 
        front = temp;
        rear = temp;
    }
    else {
        rear->link = temp;
        rear = temp;
    }
    display();
}

void dequeue() {
    if (front == NULL) 
        printf("\n\tEmpty list!!\n");
    else {
        temp = front;
        front = front->link;
        free(temp);
        display();
    }
}

int main() {
    while (1) {
        int choice;
        printf("\nEnter one of options\n1) Enqueue\n2) Dequeue\n3) exit\n");
        scanf("%d", &choice);
        if (choice == 1)
            enqueue();
        else if (choice == 2)
            dequeue();
        else if (choice == 3)
            break;
        else
            printf("\nIncorrect input\n");
    }
}

/*
 Program name: LINEAR QUEUE
 Rollno: 
 Author name: Aswin V B
*/

#include <stdio.h>

int front = -1, rear = -1, n, a[20];
void enqueue() {
    int val;
    printf("Enter the value: ");
    scanf("%d", &val);
    if (rear == n -1) 
        printf("Queue full\n");
    else {
        if (rear == -1)
            front = 0;
        ++rear;
        a[rear] = val;
    }
}

void dequeue() {
    int data;
    if (front == -1 && rear == -1) 
        printf("Queue empty\n");
    else
        a[front] = data;
        ++front;
}
void q_display() {
    printf("\n");
    for (int i = front; i <= rear && !(front == -1 || rear == -1); ++i)
        printf("%d  ", a[i]);
}
void menu() {
    int in;
    while(1) {
        printf("\nEnter one of options\n1) enqueue\n2) dequeue\n3) exit\n");
        scanf("%d", &in);
        if (in == 1)
            enqueue();
        else if (in == 2)
            dequeue();
        else
            break;
        q_display();
    }
}
void main() {
    printf("Enter the size of linear queue: ");
    scanf("%d", &n);
    menu();
}


/*
 Program name: CIRCULAR QUEUE
 rollno: 222
 Authur name: Aswin V B
*/


#include <stdio.h>
int front = -1, rear = -1, n, a[20];

void q_display() {
    if (front != -1) {
        printf("\n");
        int i;
        for (i = front; i != rear; i = (i+1) % n)
            printf("%d --> ", a[i]);
        printf("%d", a[i]);
    }
}

void enqueue() {
    if (front == (rear +1) % n)
        printf("Queue full\n");
    else {
        int val;
        printf("Enter the value: ");
        scanf("%d", &val);
        if (front == -1)
            front = 0;
        rear = (rear + 1) % n;
        a[rear] = val;
    }
    q_display();
}

void dequeue() {
    if (front == -1 && rear == -1) 
        printf("Queue empty\n");
    else if (front == rear)
        front = -1, rear = -1;
    else 
        front = (front + 1) % n;
    q_display();
}

void menu() {
    int in;
    while(1) {
        printf("\nEnter one of options\n1) enqueue\n2) dequeue\n3) exit\n");
        scanf("%d", &in);
        if (in == 1)
            enqueue();
        else if(in == 2)
            dequeue();
        else if (in == 3)
            break;
        else 
            printf("\nIncorrect input\n");
    }
}
void main() {
   printf("Enter the size of circular queue: ");
   scanf("%d", &n);
   menu();
}

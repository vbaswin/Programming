/*
 Program name: CIRCULAR QUEUE
 rollno: 222
 Authur name: Aswin V B
*/


#include <stdio.h>
int front = -1, rear = -1, n, a[20];

void enqueue() {
    int val;
    if (front == (rear +1) % n)
        printf("Queue full\n");
    else {
        printf("Enter the value: ");
        scanf("%d", &val);
        if (front == -1)
            front = 0;
        rear = (rear + 1) % n;
        a[rear] = val;
    }

}

void dequeue() {
    if (front == -1 && rear == -1) 
        printf("Queue empty\n");
    else {
        a[front] = 0;
        front = (front + 1) % n;
        if (a[front] == 0 && a[rear] == 0)
            front = -1, rear = -1;
    }

}

void q_display() {
    printf("\n");
    for (int i = 0; i < n; i++)
        printf("%d  ", a[i]);
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
        q_display();
    }
}
void main() {
   printf("Enter the size of circular queue: ");
   scanf("%d", &n);
   menu();

}

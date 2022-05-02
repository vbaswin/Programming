#include <stdio.h>
#include <stdlib.h>

typedef struct nodes {
    int data;
    struct nodes *link;
} node;

node *create_newnode(int data) {
    node *newnode = (node *)malloc(sizeof(node));
    newnode->data = data;
    newnode->link = NULL;
    return newnode;
}

node *create() {
    int num;
    printf("Enter data[-1 =>no node]: ");
    scanf("%d", &num);
    if (num == -1)
        return NULL;
    node *newnode = create_newnode(num);
    newnode->link = create();
    return newnode;
}

void odd_even_split(node **head, node **odd, node **even) {
    node *newnode, *next_odd, *next_even;
    for (node *tmp = *head; tmp != NULL; tmp = tmp->link) {
        newnode = create_newnode(tmp->data);
        if ((tmp->data)%2 != 0) {
            if (*odd == NULL) {
                *odd = newnode;
                next_odd = newnode;
            }
            else {
                next_odd->link = newnode;
                next_odd = newnode;

            }
        }
        else {
            if (*even == NULL) {
                *even = newnode;
                next_even = newnode;
            }
            else {
                next_even->link = newnode;
                next_even = newnode; 
            }
        }
    }
}

void display(node *head) {
    for (node *tmp = head; tmp != NULL; tmp = tmp->link) 
        printf("%d ", tmp->data);
    printf("\n");
}

int main() {
    node *head = create(); 
    node *even = NULL, *odd = NULL;
    display(head);
    odd_even_split(&head, &odd, &even);
    display(odd);
    display(even);
}

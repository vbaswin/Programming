#include <stdio.h>
#include <stdlib.h>

typedef struct nodes {
    int data;
    struct nodes *link;
} node;

node *create_newnode() {
    return (node *)malloc(sizeof(node));
}

node *create() {
    int num;
    scanf("%d", &num);
    if (num == -1)
        return NULL;
    node *newnode = create_newnode();
    newnode->data = num;
    newnode->link = create();
    return newnode;
}

void display(node *head) {
    for (node *tmp = head; tmp != NULL; tmp = tmp->link)
        printf("%d ", tmp->data);
    printf("\n");
}

void merge_sort(node **head, 

int main() {
    printf("Enter data [-1 => stop]: ");
    node *head = create();
    display(head);
}

#include <stdio.h>
#include <stdlib.h>

typedef struct nodes {
    int data;
    struct nodes *link;
} node;

void swap(node **j, node **second) {
    int num = (*j)->data;
    (*j)->data = (*second)->data;
    (*second)->data = num;
}

int length(node *head) {
    int cnt = 1;
    for (node *i = head; i != NULL; i=i->link) 
        ++cnt; 
    return cnt;
}

void bubble_sort(node **head) {
    node *h = *head;
    int cnt = length(h);
    node *second;
    for (int i = 0; i < cnt; ++i) {
        for (node *j = *head; j->link != NULL; j = j->link) {
            second = j->link; 
            if (j->data > second->data)
                swap(&j, &second);
        }
    }
}

node *create() {
    int num;
    scanf("%d", &num);
    if (num == -1)
        return NULL;
    node *newnode = (node *)malloc(sizeof(node));
    newnode->data = num;
    newnode->link = create();
    return newnode;
}

void display(node *head) {
    for (node *tmp = head; tmp != NULL; tmp = tmp->link) 
        printf("%d ", tmp->data);
    printf("\n");
}

int main() {
    printf("Enter data [-1 => no node]: ");
    node *head = create();
    bubble_sort(&head);
    display(head);
    return 0;
}

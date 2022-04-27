#include <stdio.h>
#include <stdlib.h>

typedef struct nodes {
    int data;
    int cnt;
    struct nodes *link;
}node;

node *create_newnode() {
    return (node *)malloc(sizeof(node));
}

node *create() {
    node *newnode = create_newnode();
    printf("Enter data [-1 => no node]: ");
    int n;
    scanf("%d", &n);
    if (n == -1)
        return NULL;
    newnode->data = n;
    newnode->cnt = 1;
    newnode->link = create();
    return newnode;
}

void delete_duplicate(node **head) {
    node *tmp, *tmp2, *parent;
    for (tmp = *head; tmp != NULL; tmp = tmp->link) {
        parent = *head;
        for (tmp2 = tmp->link; tmp2 != NULL;) {
            if (tmp->data == tmp2->data) {
                parent->link = tmp2->link;
                ++tmp->cnt;
                continue;
            }
            parent = tmp2;
            tmp2 = tmp2->link;
        }
    }
}

void display(node *head) {
    for (node *tmp = head; tmp != NULL; tmp = tmp->link)
        printf("%d ", tmp->data);
    printf("\n");
}

void display_cnt(node *head) {
    for (node *tmp = head; tmp != NULL; tmp = tmp->link)
        printf("%d %d\n", tmp->data, tmp->cnt);
}

int main() {
    node *head = create(); 
    display(head);
    delete_duplicate(&head);
    display_cnt(head);
    return 0;
}

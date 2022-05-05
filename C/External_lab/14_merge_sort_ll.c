#include <stdio.h>
#include <stdlib.h>

typedef struct nodes {
    int data;
    struct nodes *next;
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
    newnode->next = create();
    return newnode;
}

void display(node *head) {
    for (node *tmp = head; tmp != NULL; tmp = tmp->next)
        printf("%d ", tmp->data);
    printf("\n");
}

void split(node *head, node **first, node **second) {
    node *fast = head->next, *slow = head;

    while (fast != NULL) {
        fast = fast->next; 
        if (fast != NULL) {
            fast = fast->next;
            slow = slow->next;
        }
    }
    *first = head;
    *second = slow->next;
    slow->next = NULL;
}

node *merge(node *first, node *second) {
    if (first == NULL)
        return second;
    if (second == NULL)
        return first;

    node *result = NULL;
    if (first->data <= second->data) {
        result = first;
        result->next = merge(first->next, second);
    }
    else {
        result = second;
        result->next = merge(first, second->next);
    }
    return result;
}

void merge_sort(node **head) {
    node *first, *second, *head_ref = *head;

    if (head_ref == NULL || head_ref->next == NULL)
        return;
    split(head_ref, &first, &second);

    merge_sort(&first);
    merge_sort(&second);

    *head = merge(first, second);
}

int main() {
    printf("Enter data [-1 => stop]: ");
    node *head = create();
    merge_sort(&head);
    display(head);
    return 0;
}

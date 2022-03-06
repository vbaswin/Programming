#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *LC, *RC;
};

struct node *create_node() {
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->LC = NULL;
    newnode->RC = NULL;
    return newnode;
}

struct node *create() {
    struct node *newnode = create_node();
    int choice;
    printf("Enter data[-1 for no node]: ");
    scanf("%d", &choice);
    if (choice == -1)
        return NULL;
    newnode->data = choice;
    printf("LC of %d\n", newnode->data);
    newnode->LC = create();
    printf("RC of %d\n", newnode->data);
    newnode->RC = create();
    return newnode;
}
struct node *node;
void search_node(struct node *link, int key) {
    if (link == NULL)
        return;
    if (link->data == key) {
        node = link;
        return;
    }
    search_node(link->LC, key);
    search_node(link->RC, key);
}
int main() {
    struct node *root = create();
    int n;
    printf("Enter data:");
    scanf("%d", &n);
    search_node(root, n);
    if (node == NULL)
        printf("data not present");
    else
        printf("data present");
    return 0;
}

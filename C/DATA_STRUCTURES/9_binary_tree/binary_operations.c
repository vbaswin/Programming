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

void inorder(struct node *link) {
    if (link == NULL)
        return;
    inorder(link->LC);
    printf("%d ", link->data);
    inorder(link->RC);
}

void preorder(struct node *link) {
    if (link == NULL)
        return;
    printf("%d ", link->data);
    preorder(link->LC);
    preorder(link->RC);
}

void postorder(struct node *link) {
    if (link == NULL)
        return;
    postorder(link->LC);
    postorder(link->RC);
    printf("%d ", link->data);
}

struct node *parent1;
void search_parent(struct node *link,struct node *parent, int key) {
    if (link == NULL)
        return;
    if (link->data != key) {
        if (link->LC != NULL)
            search_parent(link->LC,link, key);
        if (link->RC != NULL)
            search_parent(link->RC,link, key);
    }
    else
        parent1 = parent;
}
void search1(struct node *root, int key) {
        if (root->data == key)
            parent1 = root;
        else {
            search_parent(root->LC, root, key);
            search_parent(root->RC, root, key);
        }
}
void search(struct node *root) {
    while(1) {
        parent1 = NULL;
        int key;
        printf("\nEnter key to search: ");
        scanf("%d", &key);
        search1(root, key); 
        if (parent1 == NULL)
            printf("%d not found\n", key);
        else
            printf("%d found\n", key);
        char c, ch;
        scanf("%c",&ch);
        printf("continue search[y/n]: ");
        scanf("%c", &c);
        if (c == 'n')
            break;
    }
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
void insert(struct node *root) {
    while(1) {
        node = NULL;
        int key;
        printf("\nEnter key to search: ");
        scanf("%d", key);
        search_node(root, key);
        if(node == NULL)
            printf("%d not found", key);
        else {
            char c;
            printf("Insert[L/R]: ");
            scanf("%c", &c);
            if (c == 'L') {
                if (node->LC != NULL) 
                    printf("\nnode present insertion not possible\n");
                else {
                    int new;
                    printf("\nEnter data to insert: ");
                    scanf("%d", &new);
                    struct node *newnode = create();
                    newnode->data = new;
                    node->LC = newnode;
                    printf("\ninsertion successful\n");
                }
            }
            else if (c == 'R') {
                if (node->RC != NULL) 
                    printf("\nnode present insertion not possible\n");
                else {
                    int new;
                    printf("\nEnter data to insert: ");
                    scanf("%d", &new);
                    struct node *newnode = create();
                    newnode->data = new;
                    node->RC = newnode;
                    printf("\ninsertion successful\n");
                }
            }
        }
        char c, ch;
        scanf("%c",&ch);
        printf("continue insertion[y/n]: ");
        scanf("%c", &c);
        if (c == 'n')
            break;
    }
}

int main() {
    struct node *root = create();
    printf("\nInorder: ");
    inorder(root);
    printf("\nPreorder: ");
    preorder(root);
    printf("\nPostorder: ");
    postorder(root);
    printf("\n");
    search(root);
    insert(root);
    return 0;
}

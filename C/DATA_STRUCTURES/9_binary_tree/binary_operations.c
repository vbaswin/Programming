#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *LC, *RC;
};

struct node *create_node() {
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->LC = NULL;
    newnode->RC = NULL;
    return newnode;
}

struct node *create() {
    int data;
    printf("\nEnter data[-1 no node]: ");
    scanf("%d", &data);
    if(data == -1)
        return NULL;
    struct node *ptr = create_node();
    ptr->data = data;
    printf("LC of %d", data);
    ptr->LC = create();
    printf("RC of %d", data);
    ptr->RC = create();
    return ptr;
}

void inorder(struct node *root) {
    if(root == NULL)
        return;
    inorder(root->LC);
    printf("%d ", root->data);
    inorder(root->RC);
}

void search(struct node *root, struct node **ptr, int key) {
    if (root == NULL)
        return;
    if (*ptr != NULL)
        return;
    if (root->data == key)
        *ptr = root;
    else {
        search(root->LC, ptr, key);
        search(root->RC, ptr, key);
    }
}

void insert(struct node *root) {
    struct node *ptr = NULL;
    int key;
    printf("Enter data to search: ");
    scanf("%d", &key);
    search(root, &ptr, key);    
    if (ptr == NULL) {
        printf("\nElement not found\n");
        return;
    }
    else {
        if (ptr->LC == NULL || ptr->RC == NULL) {
            struct node *tmp = create_node();
            int n;
            printf("Enter data: ");
            scanf("%d", &n);
            tmp->data = n;
            if (ptr->LC == NULL)
                ptr->LC = tmp;
            else if (ptr->RC == NULL)
                ptr->RC = tmp;
            printf("\nInsertion successful\n");
        }        
        else
            printf("\nHave 2 child nodes insertion not possible\n");
    }
}

void search_parent(struct node *root, struct node *p, 
        struct node **parent, int key) {
    printf("hi");
    if (root == NULL)
        return;
    if (*parent != NULL)
        return;
    if (root->data == key) {
        *parent = p;
        return;
    }
    else {
        p = root;
        search_parent(root->LC, p, parent, key);
        search_parent(root->RC, p, parent, key);
    }
}

void delete(struct node *root) {
    struct node *parent = NULL, *p = NULL;
    int key;
    printf("Enter data to delete: ");
    scanf("%d", key);
    search_parent(root, p, &parent, key);
    if (parent == NULL) {
        printf("\nElement not found\n");
        return;
    }
    else {
        struct node *ptr1 = parent->LC, *ptr2 = parent->RC;
        if (ptr1->data == key) {
            if (parent->LC->LC == NULL && parent->LC->RC == NULL) {
                p = parent->LC;
                parent->LC = NULL;
                free(p);
            }
            else
                printf("\nchild nodes present deletion not possible\n");
        }
        else if (ptr2->data == key) {
            if (ptr2->LC == NULL && ptr2->RC == NULL) {
                p = parent->RC;
                parent->RC = NULL;
                free(p);
            }
            else
                printf("\nchild nodes present deletion not possible\n");
        }
    }
}
int main() {
    struct node *root = create(); 
    printf("\n");
    inorder(root);
    printf("\n");
    /*
    insert(root);
    printf("\n");
    inorder(root);
    printf("\n");
    */
    delete(root);
    printf("\n");
    inorder(root);
    printf("\n");
    return 0;
}

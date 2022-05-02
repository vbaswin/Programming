#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct nodes {
    int data;
    struct nodes *lc;
    struct nodes *rc;
} node;

node *create_newnode(int key) {
    node *newnode = (node *)malloc(sizeof(node));
    newnode->data = key;
    return newnode;
}

void inorder(node *link) {
    if (link == NULL)
        return;
    inorder(link->lc);
    printf("%d ", link->data);
    inorder(link->rc);
}

node *insert(node *link, int key) {
    if (link == NULL)
        return create_newnode(key);
    if (key < link->data)
        link->lc = insert(link->lc, key);
    else if(key > link->data)
        link->rc = insert(link->rc, key);
    return link;
}

node *search(node *link, int num) {
    if (link == NULL)
        return NULL;
    int data = link->data;
    if (num == data) 
        return link;
    else if (num < data)
        return search(link->lc, num);

    return search(link->rc, num);
}

node *inorder_successor(node *link) {
    if (link == NULL)
        return;
    if (link->rc == NULL)
        return link;
    return inorder_successor(link->rc);    
}

void delete(node *root) {
    printf("Enter data: ");
    int num;
    scanf("%d", &num);
    node *data = search(root);
    if (data == NULL) {
        printf("Data not found!\n");
        return;
    }
    node *successor = inorder_successor(data->lc);

}

void menu() {
    node *root = NULL;
    char choice;

    while (1) {
        printf("Enter i[insert], s[search], d[delete], e[exit]: ");
        scanf(" %c", &choice);
        if(choice == 'i') { 
            int key;
            printf("Enter data to insert: ");
            scanf("%d", &key);
            root = insert(root, key);
        }
        else if (choice == 's') {
            int num;
            printf("Enter data to search: ");
            scanf("%d", &num);
            node *result = NULL;
            result = search(root, num);
            if (result == NULL)
                printf("Data not found!\n");
            else
                printf("Data present!\n");
        }
        else if (choice == 'd')
            delete(&root);
        else if (choice == 'e')
            break;
        else
            printf("Incorrect input\n");
        inorder(root);
        printf("\n");
    }
}

int main() {
    menu();
}

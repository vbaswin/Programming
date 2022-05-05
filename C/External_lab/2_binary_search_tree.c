#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct nodes {
    int data;
    struct nodes *lc;
    struct nodes *rc;
} node;

node *create_newnode(int data) {
    node *newnode = (node *)malloc(sizeof(node));
    newnode->data = data;
    return newnode;
}

void inorder(node *link) {
    if (link == NULL)
        return;
    inorder(link->lc);
    printf("%d ", link->data);
    inorder(link->rc);
}

node *insert(node *link, int data) {
    if (link == NULL)
        return create_newnode(data);
    if (data < link->data)
        link->lc = insert(link->lc, data);
    else if(data > link->data)
        link->rc = insert(link->rc, data);
    return link;
}

node *search(node *link, int num) {
    if (link == NULL || link->data == num)
        return link;
    if (num < link->data)
        return search(link->lc, num);

    return search(link->rc, num);
}

node *inorder_successor(node *root) {
    node *current = root;
    while (current && current->lc != NULL)
        current = current->lc;
    return current;
}

node *delete(node *root, int num) {
    if (root == NULL)
        return NULL;
    else if (root->data > num)
        root->lc = delete(root->lc, num);
    else if (root->data < num)
        root->rc = delete(root->rc, num);
    else {
        if (root->lc == NULL && root->rc == NULL)
            return NULL;
        else if (root->lc == NULL) {
            node *tmp = root->rc;
            free(root);
            return tmp;
        }
        else if (root->rc == NULL) {
            node *tmp = root->lc;
            free(root);
            return tmp;
        }
        else {
            node *in_suc = inorder_successor(root->rc);
            root->data = in_suc->data;
            root->rc = delete(root->rc, in_suc->data);
        }
    }
    return root;
}

void menu() {
    node *root = NULL;
    char choice;

    while (1) {
        printf("Enter i[insert], s[search], d[delete], e[exit]: ");
        scanf(" %c", &choice);
        int num;
        if(choice == 'i') { 
            int data;
            printf("Enter data to insert: ");
            scanf("%d", &data);
            root = insert(root, data);
        }
        else if (choice == 's') {
            printf("Enter data to search: ");
            scanf("%d", &num);
            node *result = NULL;
            result = search(root, num);
            if (result == NULL)
                printf("Data not found!\n");
            else
                printf("Data present!\n");
        }
        else if (choice == 'd') {
            printf("Enter data: ");
            scanf("%d", &num);
            root = delete(root, num);
        }
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

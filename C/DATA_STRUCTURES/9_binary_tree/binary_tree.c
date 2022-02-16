#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *LC, *RC;
};

struct node *create() {
    struct node *newnode;
    int n;
    printf("Enter data[-1 => no node]: ");
    scanf("%d", &n);
    if (n == -1)
        return NULL;
    
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->LC = NULL, newnode->RC = NULL;
    newnode->data = n;

    printf("LC of %d\n", n);
        newnode->LC = create();
    printf("RC of %d\n", n);
        newnode->RC = create();

    return newnode;
}

int arr[100], i = 0;

void tree_array(struct node *link) {
    if (link == NULL) {
        arr[i++] = '\0';
        return;
    }
    arr[i++] = link->data;
    tree_array(link->LC);
    tree_array(link->RC);
}

void arr_disp() {
    for (int j = 0; j < i; ++j)
        printf("%d ", arr[j]);
    printf("\n");
}

void preorder(struct node *link) {
    if (link == NULL)
        return;
    printf("%d ", link->data);
    preorder(link->LC);
    preorder(link->RC);
}

void inorder(struct node *link) {
    if (link == NULL)
        return;
    inorder(link->LC);
    printf("%d ", link->data);
    inorder(link->RC);
}

void postorder(struct node *link) {
    if (link == NULL)
        return;
    postorder(link->LC);
    postorder(link->RC);
    printf("%d ", link->data);

}
int main() {
    struct node *root = create();
    printf("\nTree array: ");
    tree_array(root);
    arr_disp();
    printf("\nPreorder: ");
    preorder(root);
    printf("\n");
    printf("Inorder: ");
    inorder(root);
    printf("\n");
    printf("Postorder: ");
    postorder(root);
    printf("\n");
    return 0;
}

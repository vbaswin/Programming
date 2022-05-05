#include <stdio.h>
#include <stdlib.h>

typedef struct nodes {
    int data;
    struct nodes *lc, *rc;
} node;

node *create() {
    int num;
    scanf("%d", &num);
    if (num == -1)
        return NULL;
    node *newnode = (node *)malloc(sizeof(node));
    newnode->data = num;
    printf("lc of %d: ", num);
    newnode->lc = create();
    printf("rc of %d: ", num);
    newnode->rc = create();
    return newnode;
}

node *delete(node *root, int num) {
    if (root == NULL)
        return root;
    else if (root->data == num) {
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
        else 
            printf("node has 2 child node\n");
    }
    else {
        root->lc = delete(root->lc, num);
        root->rc = delete(root->rc, num);
    }
    return root;
}

void display(node *root) {
    if (root == NULL)
        return;
    display(root->lc);
    printf("%d ", root->data);
    display(root->rc);
}


int main() {
    printf("Enter data: ");
    node *root = create();
    while (1) {
        char ch;
        scanf(" %c", &ch); 
        if (ch == 'd') {
            int num;
            scanf("%d", &num);
            root = delete(root, num); 
        }
        else if (ch == 'e')
            break;
        display(root);
    }
}

#include <stdio.h>
#include <stdlib.h>

struct node {
    char name[20];
    int age;
    struct node *link;
};

int main() {
    struct node *head, *newnode, *temp;

    int choice;
    while (1) {
        printf("Enter one of options\n1) add data\n2) exit\n");
        scanf("%d", &choice);
        if (choice == 1) {
            newnode = (struct node *)malloc(sizeof(struct node));
            printf("Enter name and age: ");
            scanf("%s %d", newnode->name, &newnode->age);
            newnode->link = NULL;

            if(head == NULL) {
                head = newnode;
                temp = newnode;
            }
            else {
                temp->link = newnode;
                temp = newnode;
            }
            temp = head;
            printf("\n");
            while(temp->link != NULL) {
                printf("%s %d --> ", temp->name, temp->age);
                temp = temp->link;
            }
            printf("%s %d", temp->name, temp->age);
        }
        else 
            break;
        printf("\n\n");
    }
    return 0;
}

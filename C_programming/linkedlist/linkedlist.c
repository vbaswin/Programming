/*
 Program:

 Create a singly linked list to store name, rollno and marks obtained by n students.
 Implement the following functions: 
    1) Insert student at front of list
    2) Insert student at end of list
    3) Insert student after a particular student(rollno)
    4) delete student at front of list
    5) delete student at end of list
    6) delete student having a particular rollno

 Rollno: 222
 Authur name: Aswin V B
*/

#include <stdio.h>
#include <stdlib.h>

struct node {
    char name[20];
    int rollno;
    float marks;
    struct node *link;
};
struct node *head, *newnode, *temp;
int menu() {
    int choice;
    printf("\nEnter one of the options\n");
    printf("1) Insert student at front of list\n");
    printf("2) Insert student at end of list\n");
    printf("3) Insert student after a particular student(rollno)\n");
    printf("4) delete student at front of list\n");
    printf("5) delete student at end of list\n");
    printf("6) delete student having a particular rollno\n");
    printf("7) exit\n");
    scanf("%d", &choice);
    return choice;
}
struct node* create_node() {
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter student details\n\n");
    printf("Name: ");
    scanf("%s", newnode->name);
    printf("Rollno: ");
    scanf("%d", &newnode->rollno);
    printf("Marks: ");
    scanf("%f", &newnode->marks);
    newnode->link = NULL;
    return newnode;
}
void insert_front() {
    newnode = create_node();
    if (head == NULL)
        head = newnode;
    else {
        newnode->link = head;
        head = newnode;
    }
}

void insert_end() {   
    newnode = create_node();
    if (head == NULL) {
        head = newnode;
        temp = newnode;
    }
    else {
        temp->link = newnode;
        temp = newnode;
    }
}

void insert_after_rollno() {
    int no;
    if (head == NULL)
        printf("\n\nEmpty list\n\n");
    else {
        printf("Enter the rollno after which student is to be inserted: ");
        scanf("%d", &no);
        temp = head;
        while(temp->rollno != no && temp != NULL)
            temp = temp->link;
        if (temp->rollno == no) {
            newnode = create_node();
            newnode->link = temp->link;
            temp->link = newnode;
        }
        else
            printf("\nStudent not found\n");
    }
}

void delete_front() {
    if (head == NULL) 
        printf("\nList empty\n");
    else {
        temp = head;
        head = head->link;
        free(temp);
    }
}
void delete_end() {
    struct node *prev;
    if (head == NULL)
        printf("\n\nList empty\n");
    else {
        temp = head;
        while(temp->link != NULL) {
            prev = temp;
            temp = temp->link;
        }
        if (temp == head) {
            head = head->link;
            free(temp);
        }
        else {
            prev->link = NULL;
            free(temp);
        }
    }
}
void delete_using_rollno() {
    struct node *prev;
    int no;
    if (head == NULL)
        printf("\n\nList empty\n");
    else {
        printf("Enter the rollno of student to delete: ");
        scanf("%d", &no);
        
        temp = head;
        while (temp->rollno != no && temp->link != NULL) {
            prev = temp;
            temp = temp->link;
        }

        if (temp->rollno == no) {
                if(temp == head) {
                    head = head->link;
                    free(temp);
                }
                else if (temp->link == NULL) {
                    prev->link = NULL;
                    free(temp);
                }
                else {
                    prev->link = temp->link;
                    free(temp);
                }
        }
        else  
            printf("\nStudent not found\n\n");
    }
}
void display() {
    temp = head;
    if (temp != NULL) {
        printf("\n");
        while(temp->link != NULL) {
            printf("%s %d %0.2f --> ", temp->name, temp->rollno, temp->marks);
            temp = temp->link;
        }
        printf("%s %d %0.2f", temp->name,temp->rollno, temp->marks);
    }
    else
        printf("\nlinked list empty");
    printf("\n\n");
}
void actions() {
    struct node *head, *newnode, *temp;
    while (1) {
        int choice = menu();
        if (choice == 1)
            insert_front();
        else if (choice == 2) 
            insert_end();
        else if (choice == 3)
            insert_after_rollno();
        else if (choice == 4)
            delete_front();
        else if (choice == 5)
            delete_end();
        else if (choice == 6)
            delete_using_rollno();
        else if (choice == 7) {
            display();
            break;
        }
        else {
            printf("\nIncorrect Input: \n\n");
            continue;
        }
        display(head, temp);
    }
}

int main() {
    actions();
}


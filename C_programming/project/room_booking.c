#include <stdio.h>
#include <stdlib.h>

struct room {
    int room_no;
    int area;
    int door;
    int x;
    int y;
    int status;
    struct room *link;
};
struct room *head, *newnode, *temp, *prev;

struct node *create_room() {
    newnode = (struct node *)malloc(sizeof(struct node));


}

void remove_room() {
    // Remove using key(key = room_no)
    int key;
    if (head == NULL)
        printf("\nNo rooms allocated to remove\n");
    else {
        printf("Enter the room_no to remove: ");
        scanf("%d", &key);
        temp = head;
        while (temp != NULL) {
            if (temp->link == NULL && temp->rollno != no) {
                printf("\nStudent not found\n\n");
                break;
            }
            if (temp->rollno != no) {
                prev = temp;
                temp = temp->link;
            }
            else {
                if (temp == head) {
                    head = head->link;
                    free(temp);
                    break;
                }
            }
        }

    }
}

int book_room() {
    newnode = create_room();

}

int menu() {
    printf("Enter one of options\n");
    printf("\n1) Book rooms\n");
    printf("\n2) Check out room\n");
    printf("\n3) exit\n");
    int choice;
    scanf("%d", &choice);
    return choice;
}

int main() {
    while (1) {
        int choice = menu();
        if (choice == 1)
            book();
        else if (choice == 2)
            remove();
}

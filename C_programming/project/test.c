#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct room{
    int name; //room no
    int area;
    int door;
    int x;
    int y;
    int status;//for availability of room (if available - 1 else 0)
    struct room *link;
};

struct room *head, *new, *temp, *prev, *p;

int menu(){ 
    printf("\nEnter one of options\n");
    printf("\n1) Book rooms\n2) Vacate room\n3) Create rooms\n4) Remove rooms\n");
    printf("5) Display rooms\n6) Exit\n\n");
    int choice;
    scanf("%d", &choice);
    return choice;
}

int deluxe_aval, double_aval; 
void rooms_aval() {
    deluxe_aval = 0, double_aval = 0;
    for (temp = head; temp != NULL; temp = temp->link) {
        if (temp->status == 1) {
            if (temp->area == 120)
                ++deluxe_aval;
            else if (temp->area == 60)
                ++double_aval;
        }
    }
    printf("\nNo of rooms available\n\nDeluxe: %d\nDouble: %d\n", deluxe_aval,
            double_aval);
}
void vacate() {
    int name;
    printf("Enter the room no to vacate: ");
    scanf("%d", &name);
    for (temp = head; temp->name != name && temp->link != NULL; temp = temp->link);
    if (temp->name == name) {
        if (temp->status == 1) 
            printf("\nRoom already vacated!!\n");
        else
            temp->status = 1;
    }
    else 
        printf("\nRoom not found!!\n");
}

int name = 0, door = 2, x = 0, y = 0, rooms = 0;
void create_room(int type) {
    new = (struct room *)malloc(sizeof(struct room));
    new->name = ++name;
    new->door = door;
    if (type == 1) {
        if (rooms % 5 == 0) {
            x = 2;
            y = y + 30;
        }
        else 
            x = x + 4;
        new->area = 120;
    }
    else if (type == 2) {
        if (rooms % 5 == 0) {
            x = 1;
            y = y + 30;
        }
        else
            x = x + 3;
        new->area = 60;
    }
    new->x = x;
    new->y = y;
    new->status = 1;
    new->link = NULL;
    
    if (head == NULL) {
        head = new;
        temp = new;
    }
    else {
        for (temp = head; temp->link != NULL; temp = temp->link);
            temp->link = new;
    }
    ++rooms;
}
void display() {
    if (head == NULL) 
        printf("\nNo rooms allocated currently!!\n");
    else {
        int ch, key;
        printf("\nDisplay details of \n1) All rooms\n2) single room\n");
        scanf("%d", &ch);
        if (ch == 1) {
            printf("Roomno\tArea\tDoors\tx\ty\tstatus\n");
            for (temp = head; temp != NULL; temp= temp->link) 
            printf("%d\t%d\t%d\t%d\t%d\t%d\n", temp->name, temp->area, temp->door, 
                    temp->x, temp->y, temp->status);
            rooms_aval();
        }
        else if (ch == 2) {
            printf("\nEnter room no to be displayed: ");
            scanf("%d", &key);
            for (temp = head; temp->name != key && temp->link != NULL; temp=temp->link);
            if (temp->name == key) {
                printf("\nRoomno\tArea\tDoors\tx\ty\tstatus\n");
                printf("%d\t%d\t%d\t%d\t%d\t%d\n", temp->name, temp->area, temp->door, 
                    temp->x, temp->y, temp->status);
            }
            else 
                printf("\nRoom not found!!\n");
        }
    }
}
int nearest(int x, int y){
    return sqrt( pow((x - temp->x), 2) + pow((y - temp->y),  2));
}

void book() {
    int deluxe = 0, double_rm = 0;
    while (1) {
        display();
        printf("\nEnter the no of rooms needed\nDeluxe: ");
        scanf("%d", &deluxe);
        printf("Double: ");
        scanf("%d", &double_rm);

        if (deluxe > deluxe_aval || double_rm > double_aval) {
            int try;
            printf("\nRooms not available\n\n1) display rooms\n2) Try again\n");
            printf("3) Exit\n");
            scanf("%d", &try);
            if (try == 1)
                display();
            else
                continue;
        }
        else 
            break;
    }

    printf("\n1) if nearest room required\n2) random room\n");
    int choice;
    scanf("%d", &choice);
    int i = 0, j = 0;

    if (choice == 1) {
        int x, y, d;
        printf("Enter the location(x, y): ");
        scanf("%d %d", &x, &y);
        while (i < deluxe || j < double_rm) {
            int min1 = 100000, min2 = 100000;
            for (temp = head; temp != NULL; temp= temp->link) {
                if (temp->status == 1) {
                    if (temp->area == 120 && i < deluxe) {
                        d = nearest(x, y);
                        if (d < min1) {
                            min1 = d;
                            p = temp;
                        }
                    }
                    else if (temp->area == 60 && j < double_rm) {
                        d = nearest(x, y);
                        if (d < min2) {
                            min2 = d;
                            prev = temp;
                        }
                    }
                }
            }
            if (i < deluxe) {
                p->status = 0;
                ++i;
            }
            if (j < double_rm) {
                prev->status = 0;
                ++j;
            }
        }
    }
    else if (choice == 2) {
        while (i < deluxe || j < double_rm) {
            for (temp = head; temp != NULL; temp = temp->link) { 
                if (temp->status == 1) {
                    if (temp->area == 120 && i < deluxe) {
                        ++i;
                        temp->status = 0; 
                    }
                    else if (temp->area == 60 && j < double_rm) {
                        ++j;
                        temp->status = 0;
                    }
                }
            }
        }

    } 
    
}

void remove_room(){
// Remove using key(key=room no)
    int no;
    if (head == NULL)
        printf("\n\nNO rooms allocated\n");
    else {
        printf("\nEnter the room no to remove: ");
        scanf("%d", &no);
        
        temp = head;
        while (temp->name != no && temp->link != NULL) {
            prev = temp;
            temp = temp->link;
        }

        if (temp->name == no) {
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
            printf("\nRoom no not found\n\n");
    }
}

void initial_create() {
    for (int i = 0; i < 8; ++i)
        create_room(1);
    for (int i = 0; i < 7; ++i)
        create_room(2);
}
void admin() {
    while (1) {
        printf("\nEnter one of options\n");
        printf("\n1) Create room\n2) Remove room\n3) Display room \n");
        printf("4) Exit to login page\n");
        int choice;
        scanf("%d", &choice);
        if (choice == 1) {
            while (1) {
                printf("\nEnter the type of room[1 -> Deluxe, 2 -> Double], 3 -> Exit: "                );
                int type, n;
                scanf("%d", &type);
                if (type == 3)
                    break;
                else if (type != 1 && type != 2) {
                    printf("\nincorrect input\n");
                    break;
                }
                printf("\nHow many no of rooms: ");
                scanf("%d", &n);
                for (int i = 0; i < n; ++i)
                    create_room(type);
            }
        }
        else if (choice == 2)
            remove_room();
        else if (choice == 3)
            display();
        else if (choice == 4)
            break;
        else 
            printf("\nIncorrect input\n");
    }
}
void user() {
    while (1) {
        printf("\nEnter one of options\n");
        printf("\n1) Book room\n2) Vacate room\n3) Display room\n");
        printf("4) Exit to login page\n");
        int choice;
        scanf("%d", &choice);
        if (choice == 1) 
            book();
        else if (choice == 2)
            vacate();
        else if (choice == 3)
            display();
        else if (choice == 4)
            break;
        else 
            printf("\nIncorrect Input\n");
    }
}

void login() {
    while (1) {
        printf("\n\tLOGIN\n");
        printf("1) Admin\n2) User\n3) End program\n");
        int login;
        scanf("%d", &login);
        if (login == 1)
            admin();
        else if (login == 2)
            user();
        else if (login == 3)
            break;
        else
            printf("\nIncorrect input\n");
    }
}

int main() {
    initial_create(); 
    login();
    printf("\n\tThank you for using RBS\n\tCome again\n");
    return 0;
}

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
    printf("Enter one of options\n");
    printf("\n1) Book rooms\n2) Check out room\n3) create rooms\n4) remove rooms\n");
    printf("5) display rooms\n6) exit\n\n");
    int choice;
    scanf("%d", &choice);
    return choice;
}

void display(){
    if(head == NULL)
        printf("No rooms allocated currently!!\n");
    else {
        int ch,key;
        printf("1)display details of all rooms\n");
        printf("2)Display details of a single room\n");

        scanf("%d",ch);
        if(ch==1){
            printf("Roomno\tArea\tDoors\tx\ty\n");
            for(temp=head; temp != NULL; temp=temp->link)
            printf("%d\t%d\t%d\t%d\t%d\t%d\n", temp->name, temp->door, temp->area,
                    temp->x,temp->y, temp->status);
        }
        else{
            printf("Enter room no to be displayed :");
            scanf("%d",key);
            for(temp=head; temp->name != key; temp=temp->link);
            printf("Roomno%d\t%d\t%d\n%d\t%d", temp->name, temp->area, temp->door,
                    temp->x,temp->y);
        }
    }
}


int name = 0, door = 2, x = 0, y = 0, rows = 0;
void create_room(int type) {
    new = (struct room *)malloc(sizeof(struct room));
    new->name = ++name;
    new->door = door;
    if (type == 1) {
        if (rows % 5 == 0) {
            new->x = 2;
            new->y = new->y + 30;
        }
        else 
            new->x = new->x + 4;
        new->area = 120;
    }
    else if (type == 2) {
        if (rows % 5 == 0) {
            new->x = 1;
            new->y = new->y + 30;
        }
        else
            new->x = new->x + 3;
        new->area = 60;
    }
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
}

int nearest(int x, int y){
    int result = sqrt( pow((x - temp->x), 2) + pow((y - temp->y),  2));
    return result;
}
void vacate() {
    int name;
    printf("Enter the room no to vacate: ");
    scanf("%d", &name);
    for (temp = head; temp != NULL; temp = temp->link) {
        if (temp->name == name)
            temp->status = 1;
    } 
    if (temp == NULL)
        printf("\nRoom no not found\n");
}

void book() {
    int deluxe = 0, double_rm = 0;
    while (1) {
        printf("\nEnter the no of rooms needed\nDeluxe: \n");
        scanf("%d", &deluxe);
        printf("\nDouble: \n");
        scanf("%d", &double_rm);

        int deluxe_aval = 0, double_aval = 0;
        for (temp = head; temp != NULL; temp = temp->link) {
            if (temp->status == 1) {
                if (temp->area == 120)
                    ++deluxe_aval;
                else if (temp->area == 60)
                    ++double_aval;
            }
        }

        if (deluxe != deluxe_aval || double_rm != double_aval) {
            printf("\nRooms not available\nTry again\n");
            display();
            continue;
        }
        else 
            break;
    }

    printf("\n1) if nearest room required\n2) random room\n");
    int choice;
    scanf("%d", &choice);
    int i = 0, j = 0;
    if (choice == 2) {
        for (temp = head; temp != NULL || i < deluxe || j < double_rm; 
                temp = temp->link) {
            if (temp->status == 1) {
                if (temp->area == 120) 
                    ++deluxe;
                else if (temp->area == 60) {
                    ++double_rm;
                temp->status = 0;
                }
            }
        }

    } 
    else if (choice == 1) {
        int x, y, d;
        printf("Enter the location(x, y): ");
        scanf("%d %d", &x, &y);
        while (i < deluxe || j < double_rm) {
            for (temp = head; temp != NULL; temp= temp->link) {
                int min1 = -10000, min2 = -10000;
                if (temp->status == 1) {
                    if (temp->area == 120) {
                        d = nearest(x, y);
                        if (d < min1) {
                            min1 = d;
                            p = temp;
                        }
                    }
                    else if (temp->area == 60) {
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
                ++deluxe;
            }
            if (j < double_rm) {
                prev->status = 0;
                ++double_rm;
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
        printf("Enter the room no to remove: ");
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

int main(){
    initial_create(); 
    while (1) {
        int choice = menu();    
        if (choice == 1)
            book();
        else if (choice == 2)
            vacate();
        else if (choice == 3) {
            printf("\nEnter the type of room[1 -> Deluxe, 2 -> Double]: ");
            int type, n;
            scanf("%d", &type);
            printf("\nHow many no of rooms: ");
            scanf("%d", &n);
            for (int i = 0; i < n; ++i)
                create_room(type);
        }
            
        else if (choice == 4)
            remove_room();
        else if (choice == 5)
            display();
        else if (choice == 6)
            break;
        else 
            printf("\nIncorrect input\nTry again\n");
    }
    return 0;
}

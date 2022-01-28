#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <unistd.h>

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
}
void vacate() {
    int name;
    printf("\n\tEnter the room no to vacate: ");
    scanf("%d", &name);
    for (temp = head; temp->name != name && temp->link != NULL; temp = temp->link);
    if (temp->name == name) {
        if (temp->status == 1) 
            printf("\n\t\tRoom already vacated!!\n");
        else {
            temp->status = 1;
            printf("\n\t\tRoom vacated successfully!!\n");
        }
    }
    else 
        printf("\n\t\tRoom not found!!\n");
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
        printf("\n\t\tNo rooms allocated currently!!\n");
    else {
        int ch, key;
        printf("\n\t\t\tDisplay details of \n\t1) All rooms\n\t2) single room\n");
        printf("\t3) No of available rooms only\n\t4) No need\n");
        scanf("%d", &ch);
        if (ch == 1) {
            printf("\t\tRoomno\tArea\tDoors\tx\ty\tstatus\n");
            for (temp = head; temp != NULL; temp= temp->link) 
            printf("\t\t%d\t%d\t%d\t%d\t%d\t%d\n", temp->name, temp->area, temp->door, 
                    temp->x, temp->y, temp->status);
            rooms_aval();
        }
        else if (ch == 2) {
            printf("\n\tEnter room no to be displayed: ");
            scanf("%d", &key);
            for (temp = head; temp->name != key && temp->link != NULL; temp=temp->link);
            if (temp->name == key) {
                printf("\n\t\tRoomno\tArea\tDoors\tx\ty\tstatus\n");
                printf("\t\t%d\t%d\t%d\t%d\t%d\t%d\n", temp->name, temp->area, 
                        temp->door, temp->x, temp->y, temp->status);
            }
            else 
                printf("\n\t\tRoom not found!!\n");
        }
        else if (ch == 3) {
            rooms_aval();
            printf("\n\t\tNo of rooms available\n\n\tDeluxe: %d\n\tDouble: %d\n", 
                    deluxe_aval, double_aval);

        }
        else if (ch == 4);
        else
            printf("\n\tIncorrect input!!\n");
    }
}
int nearest(int x, int y){
    return sqrt( pow((x - temp->x), 2) + pow((y - temp->y),  2));
}

void book() {
    int deluxe, double_rm;
    while (1) {
        deluxe = 0, double_rm = 0;
        rooms_aval();
        display();
        printf("\n\t\tEnter the no of rooms needed\n\tDeluxe: ");
        scanf("%d", &deluxe);
        printf("\tDouble: ");
        scanf("%d", &double_rm);

        if (deluxe > deluxe_aval || double_rm > double_aval) {
            int try;
            printf("\n\t\tRooms not available!!\n\n\t1) Try again\n\t2) Exit\n");
            scanf("%d", &try);
            if (try == 1)
                continue;
            else if (try == 2)
                return;
            else 
                printf("\n\t\tIncorrect input\n");
        }
        else 
            break;
    }

    printf("\n\t\t\tLocation\n\n\t1) Nearest room required\n\t2) Random room\n");
    int choice;
    scanf("%d", &choice);
    int i = 0, j = 0;

    if (choice == 1) {
        int x, y, d;
        printf("\n\tEnter the location(x y): ");
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
    printf("\n\t\tRooms booked successfully!!\n");
    
}

void remove_room(){
// Remove using key(key=room no)
    int no;
    if (head == NULL)
        printf("\n\n\t\tNO rooms allocated\n");
    else {
        printf("\n\tEnter the room no to remove: ");
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
                printf("\n\t\tRoom removed successfully!!\n");
        }
        else  
            printf("\n\t\tRoom not found!!\n");
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
        printf("\n\t\t\tEnter one of options\n");
        printf("\n\t1) Create room\n\t2) Remove room\n\t3) Display room \n");
        printf("\t4) Exit to login page\n");
        int choice;
        scanf("%d", &choice);
        if (choice == 1) {
            while (1) {
                printf("\n\tEnter the type of room[1 -> Deluxe, 2 -> Double]");
                printf(", 3 -> Exit: ");
                int type, n;
                scanf("%d", &type);
                if (type == 3)
                    break;
                else if (type != 1 && type != 2) {
                    printf("\n\t\tIncorrect input!!\n");
                    break;
                }
                printf("\n\tHow many no of rooms: ");
                scanf("%d", &n);
                for (int i = 0; i < n; ++i)
                    create_room(type);
                printf("\n\t\tRooms created successfully!!\n");
            }
        }
        else if (choice == 2)
            remove_room();
        else if (choice == 3)
            display();
        else if (choice == 4)
            break;
        else 
            printf("\n\t\tIncorrect input!!\n");
    }
}
void user() {
    while (1) {
        printf("\n\t\t\tEnter one of options\n");
        printf("\n\t1) Book room\n\t2) Vacate room\n\t3) Display room\n");
        printf("\t4) Exit to login page\n");
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
            printf("\n\t\tIncorrect Input\n");
    }
}

void documentation();

void login() {
    while (1) {
        printf("\n\n\t\t\tLOGIN\n");
        printf("\t1) Admin\n\t2) User\n\t3) End program\n\t4) Documentation\n");
        int login;
        scanf("%d", &login);
        if (login == 1)
            admin();
        else if (login == 2)
            user();
        else if (login == 3)
            break;
        else if (login == 4)
            documentation();
        else
            printf("\nt\tIncorrect input\n");
    }
}
void animation(char str[]) {
    char some[3];
    for (int i = 0; i < 3; ++i)
        some[i] = ' ';
    for (int i = 0; i< 3; ++i) {
        some[i] = '.';
        printf("\r%s %s", str, some);
        fflush(stdout);
        usleep(600000);
    }
}
void page() {
    printf("\n\n\t\t\t\tRBS\n");
    printf("\t\t\tRoom Booking System\n\t\t\t       * * *\n\n");
    printf("\t\t\tCreated by\n");
    printf("\t\t\t\tAswin V B       -> 222\n");
    printf("\t\t\t\tAthira Jayaram  -> 224\n");
    printf("\t\t\t\tAswin P S       -> 221\n");
    printf("\t\t\t\tAthira D        -> 223\n\n");
    char str[10] = "\t\t\t   ";
    animation(str);
}

int main() {
    initial_create(); 
    page();
    login();
    printf("\n\t\t\tThank you for using RBS\n\t\t\tVisit again\n\n");
    return 0;
}


void documentation() {
    printf(
    "\n\t------------------------------------------------------------------\n"
    "\n                           Documentation for RBS\n\n"
    "\tThere are 2 logins \n\n\tA. Admin\n\tB. User\n\n\tC. End program\n"
    "\tD. Documentation\n\n\n\t~~~\n"
    "\tA. Admin has 4 powers\n"
    "\t\t1. Create room\n\t\t2. Remove room\n\t\t3. Display room\n\t\t"
    "4. Exit to login"
    " page\n"
    "\n\t1. Create room - This is of the most powerfull one. You can"
    "\n\tcreate any no of rooms that you want. The only limit is your"
    "\n\tprocessing power\n"
    "\n\n\t** There are 15 rooms already created at first: "
    "\n\t   8 - Deluxe, 7 - Double **\n"
    "\n\n\t2. Remove room - Another functionality. You can remove any room \n"
    "\tjust by specifying the room no. It's that simple.\n"
    "\n\n\t3. Display room -\n\n"
    "\tIt is present in both admin and user and also used throughout"
    "\n\tthe program. It has three options.\n\n"
    "\t\t1. All rooms - show all rooms in the system\n"
    "\t\t2. single room - \n"
    "\t\t\tusing room no to find the room no to display\n"
    "\t\t3. Available rooms only - \n"
    "\t\t\tshows the available no of deluxe and\n"
    "\t\t\tdouble rooms to book\n\n\n"
    "\t~~~\n\tB. User also has 4 powers\n"
    "\t\t1. Book room\n\t\t2. Vacate room\n\t\t3. Display room\n\t\t4. Exit to login"
    " page\n\n"
    "\t1. Book room - Booking rooms is as simple as entering the no of" 
    "\n\tdeluxe and no of double rooms required.\n\n"
    "\tEvery time you book rooms, you are also able to use the display\n"
    "\toption to make sure you book rooms correctly.\n\n"
    "\tYou can find the nearest rooms to the location you give or just" 
    "\n\trandom rooms available. It's entirely your choice\n\n"
    "\t2. Vacate room - Enter the room no you want to vacate and" 
    "\n\tit's done.\n\n"
    "\n\tIn every menu or options shown, you are given separate option" 
    "\n\tto exit out of it.\n"
    "\tIn login page you have the option to end the program.\n\n"
    "\n\t----------------------------------------------------------------\n\n"
    );
}

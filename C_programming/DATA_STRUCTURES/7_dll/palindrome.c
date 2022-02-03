/*
 Program name: Palindrome using doubly linked list
 Rollno: 222
 Authur name: Aswin V B
*/

#include <stdio.h>
#include <stdlib.h>

struct node {
    char c;
    struct node *next;
    struct node *prev;
}*head = NULL, *temp, *new, *start, *end;

void create_node(char c) {
    new = (struct node *)malloc(sizeof(struct node));
    new->c = c;
    new->next = NULL;
    if (head == NULL) {
        new->prev = NULL;
        head = new;
        temp = new;
    }
    else
    new->prev = temp;
    temp->next = new;
    temp = new;
}

int palindrome() {
    int paln = 1;
    start = head;
    end = temp;
    while (start != end) {
        if (start->c != end->c) {
            paln = 0;
            break;
        }
        start = start->next;
        end = end->prev;
    }
    return paln;
}

int main() {
    char str[20];
    printf("Enter string: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; ++i)
        create_node(str[i]);

    int paln = palindrome();
    if (paln) 
        printf("\n%s is palindrome\n", str);
    else
        printf("\n%s is not palindrome\n", str);
    return 0;
}

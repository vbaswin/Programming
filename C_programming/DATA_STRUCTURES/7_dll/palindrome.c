/*
 Program name: Palindrome using doubly linked list
 Rollno: 222
 Authur name: Aswin V B
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node {
    char c;
    struct node *next, *prev;
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
    else {
        new->prev = temp;
        temp->next = new;
        temp = new;
    }
}

bool palindrome() {
    start = head;
    end = temp;
    while (start != end) {
        if (start->c != end->c)
            return false;
        start = start->next;
        end = end->prev;
    }
    return true;
}

int main() {
    char str[20];
    printf("Enter string: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; ++i)
        create_node(str[i]);

    if (palindrome()) 
        printf("\nPalindrome\n");
    else
        printf("\nNot palindrome\n");
    return 0;
}

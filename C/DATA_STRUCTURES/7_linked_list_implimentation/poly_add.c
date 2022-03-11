// There are many situation in this question which can haunt you :)

#include <stdio.h>
#include <stdlib.h>

struct node {
    int coef;
    int exp;
    struct node *link;
} *tmp, *newnode, *ptr;

struct node *create() {
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->link = NULL;
    return newnode;
}

void read (struct node **poly) {
    int terms;
    printf("Enter the no of terms: ");
    scanf("%d", &terms);
    int coef, exp;
    printf("Enter coef and exp: ");
    
    for (int i = 0; i < terms; ++i) {
        ptr = create();
        scanf("%d %d", &coef, &exp);
        newnode->coef = coef;
        newnode->exp = exp;

        if (*poly == NULL) {
            *poly = ptr;
            tmp = ptr;
        } 
        else {
            tmp->link = ptr;
            tmp = ptr;
        }
    }
}

void insert_end (struct node **result, struct node **tmp, struct node *ptr) {
    if (*result == NULL) {
        *result = ptr;
        *tmp = ptr;
    }
    else {
        (*tmp)->link = ptr; // this can make you go round and round 
        *tmp = ptr;
    }
}
void display(struct node *poly) {
    for (tmp = poly; tmp != NULL; tmp = tmp->link)
        printf("%dx^%d ", tmp->coef, tmp->exp);
}

void addition(struct node *first, struct node *second, struct node **result) {
    struct node *first_ptr = first, *second_ptr = second;
    while (first_ptr != NULL && second_ptr != NULL) {
        ptr = create();
        if (first_ptr->exp > second_ptr->exp) {
            ptr->coef = first_ptr->coef;
            ptr->exp = first_ptr->exp;
            insert_end(result, &tmp, ptr); 
            first_ptr = first_ptr->link;
        }
        else if (first_ptr->exp < second_ptr->exp) {
            ptr->coef = second_ptr->coef;
            ptr->exp = second_ptr->exp;
            insert_end(result, &tmp, ptr);
            second_ptr = second_ptr->link;
        }
        else {
            ptr->coef = first_ptr->coef + second_ptr->coef;
            ptr->exp = first_ptr->exp;
            insert_end(result, &tmp, ptr);
            first_ptr = first_ptr->link;
            second_ptr = second_ptr->link;
        }
    }
    while (first_ptr != NULL) {
        ptr = create();
        ptr->coef = first_ptr->coef;
        ptr->exp = first_ptr->exp;
        insert_end(result, &tmp, ptr);
        first_ptr = first_ptr->link;
    }
    while (second_ptr != NULL) {
        ptr = create();
        ptr->coef = second_ptr->coef;
        ptr->exp = second_ptr->exp;
        insert_end(result, &tmp, ptr);
        second_ptr = second_ptr->link;
    }
}

int main() {
    struct node *first = NULL, *second = NULL, *result = NULL;
    printf("First polynomial\n");
    read(&first);
    printf("Second polynomial\n");
    read(&second);
    printf("\nFirst polynomial: ");
    display(first);
    printf("\nSecond polynomial: ");
    display(second);
    addition(first, second, &result);
    printf("\nResultant polynomial: ");
    display(result);
    printf("\n");
    return 0;
}



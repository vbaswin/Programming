#include <stdio.h>
#include <stdlib.h>

// declaring structures for arrival time, completion time, priority
typedef struct nodes {
    int arrival; 
    int comp;
    int priority;
    struct nodes *next;
} node;

// newnode creation and returns it
node *create_newnode() {
    return (node *)malloc(sizeof(node));
}

// create the first queue and returns each nodes by recursiong
// finally stores it in the q1 in main function
// same applies for q2 also
node *create_1(int n) {
    if (n == 0)
        return NULL;
    printf("Enter arrival, comp, priority: ");
    int arrival, comp, priority;
    scanf("%d %d %d", &arrival, &comp, &priority);
    node *newnode = create_newnode();
    newnode->arrival = arrival;
    newnode->comp = comp;
    newnode->priority = priority;
    newnode->next = create_1(--n);
    return newnode;
}

// in q2 we fist copy the contents of q1
node *create_2(node *q, int n) {
    if (n == 0)
        return NULL;
    node *newnode = create_newnode();
    newnode->arrival = q->arrival;
    newnode->comp = q->comp;
    newnode->priority = q->priority;
    newnode->next = create_2(q->next, --n);
    return newnode;
}

// for dispaying contents each time
void display(node *q) {
    node *tmp = q;
    while (tmp != NULL) {
        printf("%d %d %d\n", tmp->arrival, tmp->comp, tmp->priority);
        tmp = tmp->next;
    }
}

// for swaping the values each time we sort
// values of a are stored first in tmp and then 
// store values of b in a
// then store the values of tmp in a
void swap(node **a, node **b) {
    int tmp_a = (*a)->arrival;
    int tmp_c = (*a)->comp;
    int tmp_p = (*a)->priority;
    (*a)->arrival = (*b)->arrival;
    (*a)->comp = (*b)->comp;
    (*a)->priority = (*b)->priority;
    (*b)->arrival = tmp_a;
    (*b)->comp = tmp_c;
    (*b)->priority = tmp_p;
}

// create_arrival , create_comp, create_p all are same except # line
// this is bubble sort and lowest value is placed at first 
// ascending order
void create_arrival(node **q) {
    node *tmp1 = *q;
    node *tmp2 = (*q)->next;

    while (tmp1->next != NULL) {
        tmp2 = tmp1->next;
        while (tmp2 != NULL) {
            if (tmp1->arrival > tmp2->arrival) // #
                swap(&tmp1, &tmp2);
            tmp2 = tmp2->next;
        }
        tmp1 = tmp1->next;
    }
}
void create_comp(node **q) {
    node *tmp1 = *q;
    node *tmp2 = (*q)->next;

    while (tmp1->next != NULL) {
        tmp2 = tmp1->next;
        while (tmp2 != NULL) {
            if (tmp1->comp > tmp2->comp)
                swap(&tmp1, &tmp2);
            tmp2 = tmp2->next;
        }
        tmp1 = tmp1->next;
    }
}
void create_p(node **q) {
    node *tmp1 = *q;
    node *tmp2 = (*q)->next;

    while (tmp1->next != NULL) {
        tmp2 = tmp1->next;
        while (tmp2 != NULL) {
            if (tmp1->priority > tmp2->priority)
                swap(&tmp1, &tmp2);
            tmp2 = tmp2->next;
        }
        tmp1 = tmp1->next;
    }
}
int main() {
    node *q1, *q2;
    q1 = create_1(5); //  storing the head q1 value of queue linked list
    q2 = create_2(q1, 5);

    printf("\nq1\n");
    display(q1);
    printf("\nq2\n");
    display(q2);

    printf("\nq1 based on arrival time\n");
    create_arrival(&q1); // sorting q1 based on arrival time
    display(q1);

    printf("\nq2 based on completion time\n");
    create_comp(&q2); // sorting q2 based on completion time
    display(q2);

    printf("\nq1 based on priority\n");
    create_p(&q1); // sorting q1 based on priority 
    display(q1);

    printf("\nq2 based on priority\n");
    create_p(&q2); // sorting q2 based on priority
    display(q2);

    return 0;
}

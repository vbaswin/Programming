#include <stdio.h>

void push_s1(int **s1, int num, int **n1) {
    *(*s1) = num;
    ++n1;
}

void enqueue(int *s1, int *s2, int *n1, int *n2) {
    printf("Enter data: ");
    int num;
    scanf("%d", &num);
    push_s1(&s1, num, &n1);
}

void display(int arr[], int n1) {
    for (int i = 0; i< n1; ++i) 
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int s1[20], s2[20];
    int n1 = 0, n2 = 0;

    while(1) {
        printf("e[enqueue], d[dequeue], E: ");
        char c;
        scanf("%c", &c);
        if (c == 'e')
            enqueue(s1, s2, &n1, &n2);
        else if (c == 'd');
            // dequeue(s1, s2, &n1, &n2);
        else if (c == 'E')
            break;
        else
            printf("Incorrect input\n");
        display(s1, n1);
    }
}

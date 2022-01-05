/* Find the transpose of a sparce matrix */

#include <stdio.h>

int a[10][10], triplet[10][10], trans[10][10];

void transpose(int k, int c) {
    trans[0][0] = triplet[0][0];
    trans[0][1] = triplet[0][1];
    trans[0][2] = triplet[0][2];

    int kr = 1;
    for (int i = 0; i < c; i++) {
        for (int j = 1; j < k; j++) {
            if (triplet[j][1] == i) {
                trans[kr][0] = triplet[j][1];
                trans[kr][1] = triplet[j][0];
                trans[kr][2] = triplet[j][2];
                ++kr;
            }
        }
    }
}
int triplet_rep(int r,int c) {
   triplet[0][0] = r;
   triplet[0][1] = c;
   int k = 1;
   for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (a[i][j] != 0) {
                triplet[k][0] = i;
                triplet[k][1] = j;
                triplet[k][2] = a[i][j];
                k++;
            }
        }
    }
   triplet[0][2] = k - 1;
    return k;
}

void print_trans(int k) {
    printf("\n");
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < 3;j++)
            printf("%d ", trans[i][j]);
        printf("\n");
    }
} 
void main() {
    int r, c;
    printf("Enter the rows and columns of array: ");
    scanf("%d %d",&r, &c);
    printf("Enter the array: ");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    int k = triplet_rep(r, c);
    transpose(k, c);
    print_trans(k);
}

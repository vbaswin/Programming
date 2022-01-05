/* 
 Program name: addition of sparce matrix
 Roll no: 222
 Author name: Aswin V B
*/

#include <stdio.h>
#include <stdbool.h>
int a[10][10], b[10][10], atriplet[10][10], btriplet[10][10] ,rtriplet[10][10];

int trip_add(int atrip[][10], int btrip[][10], int k1, int k2) {
    rtriplet[0][0] = atrip[0][0];
    rtriplet[0][1] = atrip[0][1];

    int i = 1, j = 1, kr = 1;
    while (k1 > i && k2 > j) {
        if (atrip[i][0] < btrip[j][0]) {
            rtriplet[kr][0] = atrip[i][0];
            rtriplet[kr][1] = atrip[i][1];
            rtriplet[kr][2] = atrip[i][2];
            ++i; ++kr;
        }
        else if (atrip[i][0] > btrip[j][0]) {
            rtriplet[kr][0] = btrip[j][0];
            rtriplet[kr][1] = btrip[j][1];
            rtriplet[kr][2] = btrip[j][2];
            ++j; ++kr;
        }
        else if (atrip[i][1] < btrip[j][1]) {
            rtriplet[kr][0] = atrip[i][0];
            rtriplet[kr][1] = atrip[i][1];
            rtriplet[kr][2] = atrip[i][2];
            ++i; ++kr;
        }
        else if (atrip[i][1] > btrip[j][1]) {
            rtriplet[kr][0] = btrip[j][0];
            rtriplet[kr][1] = btrip[j][1];
            rtriplet[kr][2] = btrip[j][2];
            ++j; ++kr;
        }
        else {
            rtriplet[kr][0] = atrip[i][0];
            rtriplet[kr][1] = atrip[i][1];
            rtriplet[kr][2] = atrip[i][2] + btrip[j][2];
            ++i; ++j; ++kr;
        }
    } 
    
    while (k1 > i) {
        rtriplet[kr][0] = atrip[i][0];
        rtriplet[kr][1] = atrip[i][1];
        rtriplet[kr][2] = atrip[i][2];
        ++i; ++kr;
    }
    while (k2 > j) {
        rtriplet[kr][0] = btrip[j][0];
        rtriplet[kr][1] = btrip[j][1];
        rtriplet[kr][2] = btrip[j][2];
        ++j; ++kr;
    }
    rtriplet[0][2] = kr - 1;
    return kr;
}



int triplet_rep(int arr[][10], int trip[][10], int r, int c) {
    trip[0][0] = r;
    trip[0][1] = c;

    int k = 1;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (arr[i][j] != 0) {
                trip[k][0] = i;
                trip[k][1] = j;
                trip[k][2] = arr[i][j];
                ++k;
            }
        }
    }
    trip[0][2] = k - 1; // because it starts from 0 this is correct just check it out
    return k;
}

void input_sparce(int a[][10], int r, int c) {
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
} 

void print_triplet(int kr) {
    printf("\n");
    for (int i = 0; i < kr; i++) {
        for (int j = 0; j < 3; j++) 
            printf("%d ", rtriplet[i][j]);
        printf("\n");
    }
}
void main() {
    int r1, r2, c1, c2; 
    while(true) {
        printf("Enter the rows and columns of matrix a & b: ");  
        scanf("%d %d %d %d", &r1, &c1, &r2, &c2);
        if (r1 != r2 || c1 != c2) {
            printf("The rows and columns of the matrices should be equal\nTry again!");
            continue;
        }
        else
            break;
    } 
    printf("Enter matrix 1\n");
    input_sparce(a, r1, c1);

    printf("Enter matrix 2\n");
    input_sparce(b, r2, c2);

    int k1 = triplet_rep(a, atriplet, r1, c1);
    int k2 = triplet_rep(b, btriplet, r1, c1);

    int kr = trip_add(atriplet, btriplet, k1, k2);
    print_triplet(kr);
}

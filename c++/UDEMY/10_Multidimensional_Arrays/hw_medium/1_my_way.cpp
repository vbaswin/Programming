/* 
Problem #1: How many primes

Read 2 integers N and M, then Read matrix NxM.
Then read integer Q, for Q queries.
For each query read 4 integers: i j r c
    ~> Represents a grid (submatrix):
     top left (i, j) and (r, c) for (# rows, # cols)
For each query, print how many prime numbers in the requested grid.
    ~> Each query should be answered using nested loops maximum not more
    ~> In future: with smart precomputation it can be done without loops
    ■ It is called Image integral in Computer Vision field.
*/

#include <iostream>
using namespace std;

int main() {
    int n, m, q, arr[100][100];
    cin >> n >> m;
    
    for (int i = 0;i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];
    cin >> q;
    for (int k = 0; k < q; k++) {
        int i, j, r, c;
        cin >> i >> j >> r >> c;

        int cnt = 0;
        for (int x = 0; x < r ; x++) {
            for (int y = 0; y < c; y++) {
                int is_prime = true;
                int value = arr[i + x][j + y];

                if (value == 1)
                    continue;
                for (int v = 2; v < value; v++) {
                    if (value%v == 0) {
                        is_prime = false;
                        break;
                    }
                }
                if (is_prime) {
                    cout << value << " ";
                    cnt++;
                }
            }
        }
        cout << "\nCount: " <<cnt <<"\n";
    }
    return 0;
}






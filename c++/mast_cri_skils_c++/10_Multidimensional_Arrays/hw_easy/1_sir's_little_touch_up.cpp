/* 
Problem #1: Smaller row?

Read integers N, M, then Read matrix NxM. Then read Q for Q queries.
Each query is 2 integers: first and 2nd row indices (1-based)
Compare the 2 rows and print YES if first row < 2nd for all the row 
values

Input ⇒ Output
    3 4
    8 16 9 52
    3 15 27 6
    14 25 29 10
    3
    1 2
    2 3
    1 3
*/

#include <iostream>
using namespace std;

int main() {
    int n, m, arr[100][100];
    cin >> n >> m;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];
    int q;
    cin >> q;
    while (q--) {
        int r1, r2;
        cin >> r1 >> r2;

        r1--;
        r2--;
        
        bool is_satisfied = true;
        for (int i = 0; i < m; i++) {
            if (arr[r1][i] >= arr[r2][i])
                is_satisfied = false;
                break;
        }
    

        if (is_satisfied)
            cout << "YES" << "\n";
        else 
            cout << "NO" << "\n";
    }

    return 0;
}
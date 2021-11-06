/* 
Problem #2: Find mountains

Read integers N, M, then Read matrix NxM. Print all positions that are
mountain. Position is mountain if its value > 8 neighbours values
Code smartly
Input
    3 3
    8 6 1
    3 2 9
    1 6 4
Output
    0 0     (8 > 6, 3, 2)
    1 2     (9 > 1, 2, 5, 4, 6)
*/

#include <iostream>
using namespace std;

int main() {
    int n, m, arr[100][100];
    cin >> n >> m;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];
    
    /* {d, r, u, l, ul, dr, ur, dl} */
    int di[8] = {1, 0, -1, 0, -1, 1, -1, 1};
    int dj[8] = {0, 1, 0, -1, -1, 1, 1, -1};

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            bool valid_mountain = true; // check for larger neighbours

            for (int k = 0; k < 8 && valid_mountain; k++) {
                int ni = i + di[k];
                int nj = j + dj[k];

                if (ni < 0 || n <= ni || nj < 0 || m <= nj)
                    continue; // outside borders
                if (arr[i][j] < arr[ni][nj])
                    valid_mountain = false; /* no need to add
                    break here because bool will stop the loop
                    if it is false */
            }

            if (valid_mountain)
                cout << i << " " << j << "\n";
        }
    }
    return 0;
}
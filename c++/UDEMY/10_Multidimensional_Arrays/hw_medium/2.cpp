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

    for (int i = 0;i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];
    
    int di[8] = {1, 0, -1, 0, -1, 1, -1, 1};
    int dj[8] = {0, 1, 0, -1, -1, 1, 1, -1};
    for (int i = 0;i < n; i++) {
        for (int j = 0; j < m; j++) {
            int cur = arr[i][j];

            bool is_mountain = true;
            for (int k = 0; k < 8 && is_mountain; k++) {
                int ni = i + di[k];
                int nj = j + dj[k];

                if (ni < 0 || n <= ni || nj < 0 || m <= nj)
                    continue;
                if (arr[ni][nj] >= cur) {
                    is_mountain = false;
                    break;
                }
            }
            if (is_mountain)
                cout << i << " " << j << "\n";
        }
    }
    return 0;
}
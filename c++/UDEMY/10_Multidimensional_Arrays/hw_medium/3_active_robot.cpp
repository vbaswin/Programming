/* 
Problem #3: Active Robot

Read integers N, M represents a matrix. A robot start at cell (0, 0).
Read integer K, then K commands. Each command is 2 values
    ~> Direction from 1 to 4: up, right, down, left
    ~> Steps: a number to number steps to take in the direction.
     Steps [1, 1000000000]
    ~> If the robot hits the wall during the move,
     it circulates in the matrix.
    ~> For every command, print where is the robot now
Input
    3 4    4   2 1     3 2    4 2     1 3
        2 1 means to right 1 step - 3 2 means down 2 steps
Output
    (0, 1)  (2,1)   (2, 3)  (2, 3)
 */
#include <iostream> 
using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    int i = 0, j = 0;
    while (k--) {
        int dir, len;
        cin >> dir >> len;
        --dir; /* don't forget not dir-- when changes the result*/

        int di[8] = {-1, 0, 1, 0};
        int dj[8] = {0, 1, 0, -1};

        i = (i + di[dir] * len) % n; /* to circulate if higher
        just a modulus changes everything */
        j = (j + dj[dir] * len) % m;

        if (i < 0)/* if the total is -ve then add it with the
        row or col to subtract it and get the position from the
        end */
            i += n;
        if (j < 0)
            j += m;

        cout << "(" << i << ", " << j << ") ";
    }
    cout << "\n";
    return 0;
}
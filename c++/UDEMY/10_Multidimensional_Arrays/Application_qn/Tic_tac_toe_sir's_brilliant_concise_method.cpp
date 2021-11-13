/* Some tips and tricks. This is like BINGO but the way 
he used to do some things are to be noted */

#include <iostream>
using namespace std;

int main() {
    int n, grid[100][100] {0};
    cout << "Enter grid dimension: ";
    cin >> n;

    /* to check all possibilites: "2n + 2"
     the rows, all columns and
    diagonals in right direction and dia in left backward
    direction 
    (rs, cs) => starting position of the rows and columns 
                to check
    dr       => the direction to check in rows
    dc       => the direction to check in columns*/

    int rs[100], cs[100], dr[100], dc[100];

    int path = 0;
    // adding n rows for verification
    for (int k = 0; k < n; ++k)
        rs[path] = k, cs[path] = 0, dr[path] = 0, dc[path++] = 1;

    // adding n columns for verification
    for (int l = 0; l < n; ++l)
        rs[path] = 0, cs[path] = l, dr[path] = 1, dc[path++] = 0;

    // adding dia in right direction
    rs[path] = 0, cs[path] = 0, dr[path] = 1, dc[path++] = 1;

    // adding dia in left backward direction
    /* >>===>> no need of path++ here because this increases
    the path by 1 that is not needed. Kept me in this problem 
    for so long */
    rs[path] = 0, cs[path] = n - 1, dr[path] = 1, dc[path] = -1;

    int turn = 0, steps = 0;
    while(true) {
        /* if all empty spaces are filled before declaring the winner
        then it is a tie */
        if (steps == n*n) { 
            cout << "Tie\n";
            break;
        }

        char player = 'x';
        if (turn == 1)
            player = 'o';

        cout << "Player " << player <<
        " turn. Enter empty location (r, c): ";

        int r, c;
        cin >> r >> c;
        --r, --c;
        
        if (r < 0|| c < 0 || r >= n || c >= n) {
           cout << "Out of boundaries. Try again\n";
           continue;
        }
        if (grid[r][c] != 0) {
            cout << "Position already taken. Try again\n";
            continue;
        }
        /* if turn 0 ie x then value is 1 llly 
        if turn 1 ie  o then value is 2
        and if the value in the array is 0 then the 
        position is not taken*/
        grid[r][c] = turn + 1;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                char ch = '.';
                if (grid[i][j] == 1)
                    ch = 'x';
                else if(grid[i][j] == 2)
                    ch = 'o';
                cout << ch;
            } 
            cout << "\n";
        }
        // checking if the person has won
        for (int y = 0; y <= path; ++y) {
            /* reassigning the r and c to the first (starting)
            values from the possibilities section for checking 
            each row and column*/
            int r = rs[y], c = cs[y], rd =dr[y], cd = dc[y];
            int cnt = 0, start = grid[r][c];

            if(start == 0)
                continue;

            for (int m = 0; m < n; ++m, r += rd, c += cd) 
                 cnt += grid[r][c] == start; // two steps in one

            if (cnt == n) {
                cout << "Player " << player << " won\n";
                return 0;
            }
        }
        turn = !turn; // flipping the player 
        ++steps; 
        /* it is put last so we can check till the last box
        otherwise we will skip the last box*/
    }
    return 0;   
}
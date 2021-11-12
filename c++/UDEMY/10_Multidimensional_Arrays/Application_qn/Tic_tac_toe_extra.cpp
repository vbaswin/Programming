
/* 
NxN tic-tac-toe

Read integer N for the dimension of tic-tac-toe (3 <= N <= 9). Then run a
game of 2 users who keep playing till one of them wins or tie. Print the grid
after each round. Checkout below 

3
Player x turn. Enter empty location (r, c): 1 1
x..
...
...
Player 0 turn. Enter empty location (r, c): 3 1
x..
...
0..
Player x turn. Enter empty location (r, c): 2 2
x..
.x.
0..
Player 0 turn. Enter empty location (r, c): 2 1
x..
0x.
0..
Player x turn. Enter empty location (r, c): 2 2
Invalid input. Try again
Player x turn. Enter empty location (r, c): 5 5
Invalid input. Try again
Player x turn. Enter empty location (r, c): 3 3
x..
0x.
0.x
Player x won
*/

#include <iostream>
using namespace std;

int main() {
    int times; 
    cout << "Max wins for a person: ";
    cin >> times;

    int n;
    char arr[9][9];
    cout << "\nEnter the dimension: ";
    cin >> n;

    if (n < 3 || n > 9) {
        cout << "inputs 3 <= x <= 9\n";
        return 0;
    }

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            arr[i][j] = '.';

    int max_num = n * n;

    int cnt = 1; char player;
    int player_x = 0, player_o = 0;
    while (times--) {
        nxt_round:
        while (max_num--) {
            if (cnt % 2 == 0)
                player = 'o';
            else
                player = 'x';
            cnt++;

            cout << "Player " << player << 
            " turn. Enter empty location (r, c): ";
            int r, c;
            cin >> r >> c;
            --r, --c;

            if (r < 0 || c < 0 || r >= n || c >= n) {
               cout << "Out of box coordinates. Try again\n";
               ++max_num;
               continue;
            }
            arr[r][c] = player;

            int di[8] = {-1, 1, 0, 0, -1, 1, 1, -1};
            int dj[8] = {0, 0, -1, 1, -1, 1, -1, 1};
            char won;
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    for (int k = 0; k < 8; k += 2) {
                        int ni = i + di[k];
                        int ni_1 = i + di[k + 1];
                        int nj = j + dj[k];
                        int nj_1 = j + dj[k + 1];

                        if (arr[i][j] != '.' && arr[i][j] == arr[ni][nj] && 
                            arr[i][j] == arr[ni_1][nj_1]) {
                                if (player = 'x')
                                    player_x++;
                                else if(player = 'O')
                                    player_o++;
                                goto nxt_round;
                        }
                    }

                }
            }

            for (int p = 0; p < n; p++) {
                for (int q = 0; q < n; q++)
                    cout << arr[p][q];
                cout << "\n";
            }
        }
    }
    if (player_x > player_o)
        cout << "Player x won\n";
    else if (player_o > player_x)
        cout << "Player o won\n";
    return 0;
}   

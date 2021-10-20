/* 
Practice: Greedy Robot - Shorter

In last code we tried 3 positions
    ~> (i+1, j), (i, j+1), (i+1, j+1)
    ~> The shift from (i, j) is
    ~> (1, 0), (0, 1), (1, 1)
What if we coded the shifts in 2
arrays di, dj and used them
    ~> Then we stop all this copy/paste
This is called DIRECTION ARRAY
    ~> Simple trick for cleaner code when u
       want to move to your neighbours
*/

#include <iostream>
using namespace std;

int main() {
    int row, col, arr[100][100];
    cin >> row >> col;

    for (int i = 0; i < row, i++)
        for (int j = 0; j < col; j++)
            cin >> arr[i][j];

    int di[3] {1, 0, 1};
    int dj[3] {0, 1, 1};

    int i = 0, j = 0, sum = 0;
    while (i < row && j < col) {
        sum += arr[i][j];

        int max_val, cur_i = -1, cur_j = -1;
        for (int d = 0)
    }
}
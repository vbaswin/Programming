/* 
Problem #4: Flatten 3D Array

Read 3 numbers: DEPTH, ROWS, COLS the dimensions of 3D array
Then read integer either 1 (convert 3D to 1D) or 2 (1D to 3D)
If input was 1, then read 3 integers d, r, c then convert to position in 1D array
If input was 2, then read 1 integer position, then convert to 3D array position
Try to generalize if we have e.g. 6D array

Input                ⇒ Outputs
3 4 5   1   1 0 0       20
3 4 5   2   20          1 0 0 
3 4 5   1   1 1 1       26 
3 4 5   1   2 3 2       57
3 4 5   1   2 0 0       40 
3 4 5   2   59          2 3 4
*/

#include <iostream>
using namespace std;

int main() {

    if (true) { /* make this false if you want */
        /* just to show the structure of 3D array*/
        int idx = 0;
        for (int dep = 0; dep < 3; dep++)
            for (int row = 0; row < 4; row++)
                for (int col = 0; col < 5; col++)
                    cout << idx++ << " = " << dep << " " << row << " "
                    << col << "\n";/* shows the idx in 1D and 
                    corresponding coordinates in 3D*/
    }
    int D, R, C, type;
    cin >> D >> R >> C >> type;

    int Db = R * C;
    int Rb = C;
    
    int d, r, c,idx;
    if (type == 1) {
        cin >> d >> r >> c;
        idx = d * Db + r * Rb + c;
        cout << idx << "\n";
    }
    if (type == 2) {
        cin >> idx;
        d = idx / Db; /* as (r * Rb + c) < Db*/

        r = (idx % Db) / Rb; /* to isolate r as well as 
        make c 0 by c < Rb */
        c = (idx % Db) % Rb; /* to isolate c and make r 0 by 
        modulus Rb which is a factor of r * Rb */
        cout << d << " " << r << " " << c << "\n";
    }
    return 0;
}

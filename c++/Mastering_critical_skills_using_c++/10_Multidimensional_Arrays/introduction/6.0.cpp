#include <iostream>
using namespace std;

int main() {
    // {d , r, u, l, u-l, u-r, d-l, d-r}
    int di[8] {1, 0, -1, 0, -1, -1, 1 ,1};
    int dj[8] {0, 1, 0, -1, -1, 1, -1 ,1};

    int i = 4, j = 7;
    for (int pos = 0; pos < 8; pos++) {
        int ni = i + di[pos];
        int nj = j + dj[pos];

        cout << ni << " " << nj << "\n";
    }
}
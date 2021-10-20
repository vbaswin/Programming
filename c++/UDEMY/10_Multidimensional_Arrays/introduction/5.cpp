#include <iostream>
using namespace std;

int main() {
    // {d , r, u, l}
    int di[4] {1, 0, -1, 0};
    int dj[4] {0, 1, 0, -1};

    int i = 4, j = 7;
    for (int pos = 0; pos < 4; pos++) {
        int ni = i + di[pos];
        int nj = j + dj[pos];

        cout << ni << " " << nj << "\n";
    }
}
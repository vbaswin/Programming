#include <iostream>
using namespace std;

int main() {
    int n, tmp, mn[3];
    cin >> n;

    for (int i = 0; i < n; ++i) {
        int value;
        cin >> value;

        if (i < 3)
            mn[i] = value;                      // not cin >> m[i]  we are giving the input value to the 3 positions
        else {
            int max_pos = 0;                    // this max_pos is inside so for every iteration of for i, it reduces to 0
            for (int j = 1; j < 3; ++j) {
                if (mn[max_pos] < mn[j])
                    max_pos = j;
            
            }

            if (mn[max_pos] > value)            // if the position is more than 3, the max value from the mn[3] is found and if it is greater than next input value,
                mn[max_pos] = value;            // then the max value is replaced by the new input
        }
    }
    

    int max_pos = 0;
    for (int i = 0; i < 3; ++i){
        if (mn[max_pos] < mn[i])                // simple logic find the max again, 
            max_pos = i;
    }

    tmp = mn[max_pos];                          // swap with the last
    mn[max_pos] = mn[2];
    mn[2] = tmp;

    if (mn[0] > mn[1]) {                        // swap first and second if mn[0] > mn[1]
        tmp = mn[0];
        mn[0] = mn[1];
        mn[1] = tmp;
    }

    for (int i = 0; i < 3; ++i) {
        if (i != 0)                             // my contribution
            cout << " ";
        cout << mn[i];
    }

    cout << endl;
    return 0;

}
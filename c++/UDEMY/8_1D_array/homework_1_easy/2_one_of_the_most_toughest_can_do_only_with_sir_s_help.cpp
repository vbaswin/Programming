#include <iostream>
using namespace std;

int main() {
    const int N = 200;
    int n, a[N], mx = -1, mn = 10000;   // wow the most trickiest part: be careful while initializing, our output will be wrong if you make the mistake here

    cin >> n;
    for (int i = 0; i < n; ++i) {       // its ++i and not ++n no output will be granted
        cin >> a[i];

        if (mx < a[i])                  // as we just want to get the values do get mx and mn as index values like a[min]
            mx = a[i];
        if (mn > a[i])
            mn = a[i];
    }

    for (int i = 0; i < n; ++i) {
        if (a[i] == mx)
            a[i] = mn;
        else if (a[i] == mn)            // don't forget to put "else if" here. if not we will be circulating like putting a[i] to mn and then to mx so we won't get the
            a[i] = mx;                  // desired output
    }

    for(int i = 0; i < n; ++i) {
        if (i)
            cout << " ";                // beautiful coding, look at how he thought of the logic. this is skipping the spaces at the front and after the last
        cout << a[i];                   // output - think about most probably useful in later future
    }

    cout << "\n";
    return 0;
}
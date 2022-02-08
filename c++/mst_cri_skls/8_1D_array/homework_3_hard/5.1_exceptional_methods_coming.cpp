#include <iostream>
using namespace std;

int main() {
    int n, a[999];
    cin >> n;

    for (int i = 0; i < n; i++) 
        cin >> a[i];

    int maxsubarraylength = 0;
    int maxSubarrayStartIndex = -1;
    int maxSubarrayEndIndex = -1;
    for (int start = 0; start < n; start++) {
        for (int end = start; end < n; end++) { // here it is end = start
        // not forget 

            int zerosCnt = 0, onesCnt = 0; // this line psition crucial 
            // check once again 
            for (int i = start; i <= end; i++) {
                if (a[i] == 0)
                    zerosCnt++;
                else if (a[i] == 1)
                    onesCnt++;
            }

            if (zerosCnt == onesCnt ) {
                int subarraylength = end - start + 1;
                if (subarraylength > maxsubarraylength) {
                    maxSubarrayStartIndex = start;
                    maxSubarrayEndIndex = end; 
                    maxsubarraylength = subarraylength;
                }
            }
        }
    }
    if (maxsubarraylength == 0)
        cout << "NOT FOUND" << endl;
    
    else {
        cout << maxsubarraylength << endl;
        for (int i = maxSubarrayStartIndex; i <= maxSubarrayEndIndex; ++i) 
            cout << a[i] << " ";
        cout << endl;
    }
    
    return 0;
}

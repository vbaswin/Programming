#include <iostream>
using namespace std;

int main() {
    int N, num[200]; cin >> N;

    for (int i = 0; i < N; ++i)
        cin >> num[i];

    int max, max2;
    if (num[0] > num[1]){
        max = num[0]; max2 = num[1];}
    else
        max = num[1]; max2 = num[0];
        
    for (int i = 2; i < N; ++i)
        if (max <= num[i]) 
            max2 = max, max = num[i];   // this one step is the crucial double check 
        else if (max2 < num[i])         // first assign the max2 to max then change the
            max2 = num[i];              // value of max- very very important 

    cout << max << " " << max2 << "\n";

    return 0;
}
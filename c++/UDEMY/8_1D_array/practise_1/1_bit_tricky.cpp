#include <iostream>
using namespace std;

int main() {
    int N, num[200]; cin >> N;
    for (int i = 0; i < N; ++i)
        cin >> num[i];

    int max = 0;
    for (int i = 1; i < N; ++i)
        if (num[max] < num[i])
            max = i;
    int f_max = num[max];       // this step took me around the world be careful
    num[max] = -1000000;        // temp is very important
    
    int max2 = 0;
    for (int i = 1; i < N; ++i)
        if (num[max2] <= num[i]) 

            max2 = i;   
        
    int f_max2 = num[max2];
    

    cout << f_max << " " << f_max2 << "\n";

    return 0;
    
}   
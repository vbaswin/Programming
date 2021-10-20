#include <iostream>     // smart thinking
using namespace std;

int main() {
    const int N = 201;      // don't forget we need to take from 0 till 200
    int indx, series[N];    // also given it is a zero based index
    int occurence[N * 10] = {0};    // taking the value from series and 
                                    // considering it index of a 
    series[0] = 0;      // large array occurence 
    occurence[0] = 1;   // initializing the first value of the two arrays
    cin >> indx;

    for (int i = 1; i <= indx; ++i) {
        int value = series[i-1] - (i-1) -1; // primary output

        if (value < 0 || occurence[value]) {    
            value = series[i-1] + (i-1) + 1; // if condition is satisfied then
        }

        series[i] = value;    // giving the value to the index and changeing
        occurence[value] = 1; // the occurence value to 1
    }

    cout << series[indx] << endl;
    return 0;
}
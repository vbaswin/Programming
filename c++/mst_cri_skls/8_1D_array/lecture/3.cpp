#include <iostream>
using namespace std;

int main() {
    const int size {5};
    int numbers[size];

    for (int i = 0; i < size; ++i) 
        cin >> numbers[i];
    
    int min = numbers[0];               // #
    for (int i = 1; i < size; ++i) {    // i initialize not to zero it is a waste of step as we 
        if (min > numbers[i])           // have already did it it step # so min is 
            min = numbers[i];           // comparing to itself
    }                           
                                        // there can be array of other values
    cout << min << "\n";                // double salary[] 
                                        // char letters[]
    return 0;                           // string names[]
}                                       
                                        // index is from 0 to that no - 1 if not that run time error
                                        // is index out of boundary

                                        // if array[5] and five numbers are not given then 
                                        // other numbers are taken as zero

                                        // if more than 5 values are input in the above array
                                        // - compiler error
/*
   The logic of the double case is: if the difference of 2 doubles 
   is very small, they are equal. Remember doubles internally are just 
   approximate
*/

#include <iostream>
#include <cmath>
using namespace std;

template <class T>
struct MyNumber {
    T item;

    bool equal(T another) {
        return item == another;
    }
};

template<>
struct MyNumber<double> {
    double item;

    bool equal(double another) {
        if (fabs(item - another) < 0.00001)  
            // fabs returns the absolute value of the argument
            return true;
        return false;
    }
};

int main() {
    MyNumber<double> num;
    num.item = 0.1;

    double d = 3 * 0.1 - 2 * 0.1;

    cout << num.equal(d) << "\n";

    return 0;
}

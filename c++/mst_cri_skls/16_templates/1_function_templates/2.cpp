#include <iostream>
using namespace std;

// class and typename are same only just another syntax
template<class Type1, class Type2> 
Type1 sum(Type1 a, Type2 b){
    Type1 r = a + b;
    return r;
}
_
int main() {
    cout << sum(1, 10) << "\n";
    cout << sum(1,10.5) << "\n";
    cout << sum(1.2, 10.5) << "\n";
    cout << sum(1.2, 10) << "\n";
    cout << sum<int, int>(1.2, 10) << "\n";
    cout << sum('A', 1) << "\n";
    cout << sum(1, 'A') << "\n";

    // cout << sum("I am", "Mostafa") << "\n"; //  CE: char*
    cout << sum(string("I am"), string(" Mostafa")) << "\n";
}

/*
   compiler generates different functions for different data types
   here 3 types int (int int) , double, char, string
*/

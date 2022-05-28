#include <iostream>
using namespace std;

// Hey compiler this is template. Use type
template <typename Type>
Type MyMax(Type a, Type b) {
    if (a > b)
        return a;
    return b;
}

struct Employee {};

int main() {
    cout << MyMax(2, 5) << "\n";
    cout << MyMax<int>(2, 5) << "\n";
    cout << MyMax(2.5, 5.4) << "\n";
    cout << MyMax<double>(2.5, 5.4) << "\n";
    cout << MyMax('A', 'X') << "\n";

    //cout << MyMax(2, 5.4) << "\n"
    cout << MyMax<int>(2,5.4) << "\n";
    cout << MyMax<double>(2, 5.4) << "\n";

    Employee a, b;
    //cout << MyMax<Employee>(a, b) << "\n";
    return 0;
}
/*
    Generation
    
    Different versions of function MyMax are generated on compile time using
    the template
        Compiler generates ONLY based on the used cases
            ■ E.g. in previous code it generates 3 functions:
            ■ Int MyMax(int, int) / double MyMax(double, double) / 
            char MyMax(char, char)

    I did not name function max, I used MyMax
        Max is defined internally, it will cause error. Try it
    In practice:
        Might be complex and hard to apply
        Error messages: Hard to understand and ugle. Try to generate mistakes :(
*/

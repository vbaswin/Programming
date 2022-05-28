/*
   Overloading Vs Template

    Templates: identical syntax for different data types
    Function overloading is identical funcition name + different
    parameters + different function behaviour
*/

#include <iostream>
using namespace std;

template<class T>
struct Game {
    T num = 22;
    Game() {
        cout << "normal game\n" << num << "\n";
    }
};

template<>
struct Game<string> {
    Game() {
        cout << "string game\n"; 
    }
};

int main() {
    Game<int> a;
    Game<string> b;

    return 0;
}

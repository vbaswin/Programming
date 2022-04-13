#include <iostream>
using namespace std;

struct Employee {
    void print() {
        cout << "Hello\n";
    }
};

int main() {
    Employee e;
    e.print();

    Employee().print(); // creates a temporary object(no name) 
    // and calling a member function

    return 0;
}

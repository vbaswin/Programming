/*
   Structure of structure
*/ 

#include <iostream>
using namespace std;

struct full_name {
    string first, middle, last;

    void read() {
        cout << "Enter first, middle and last name: ";
        cin >> first >> middle >> last;
    }
};

struct employee {
    full_name emp_name;
    int age;
    double salary;

    void read() {
        emp_name.read();
        cout << "Enter employee age & salary: ";
        cin >> age >> salary;
    }

    void print() {
        cout << emp_name.first << " has salary " << salary << "\n";
    }
};

int main() {
    employee e;
    e.read();
    e.print();

    return 0;
}

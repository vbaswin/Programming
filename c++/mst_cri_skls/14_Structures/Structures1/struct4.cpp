/*
    Reading and Writing - Another way
*/

#include <iostream>
using namespace std;

struct employee {
    string name;
    int age;
    double salary;
    char gender;
};

const int MAX = 100000; // putting const before int that's it

employee employees_arr[MAX];
int added = 0; // no of employees

void read_employee(employee & e) { // you need to put this otherwise
    // it will only modify the copy of the object
    cout << "Enter employee's 4 entries: ";
    cin >> e.name >> e.age >> e.salary >> e.gender;
}

void print_employee(employee & e) { // no need but it saves time and memory
        cout << e.name << " " << e.age << " " << e.salary << " ";
        cout << e.gender << "\n";
}

void print_employees() {
    for (int i = 0; i < added; ++i) 
        print_employee(employees_arr[i]);
}

int main() {
    read_employee(employees_arr[added++]);
    read_employee(employees_arr[added++]);
    print_employees();
    return 0;
}

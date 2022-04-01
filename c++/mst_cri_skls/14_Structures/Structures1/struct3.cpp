/*
   Reading and writing
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

void read_employee() {
    cout << "Enter employee's 4 entries name, age, salary, gender: ";
    cin >> employees_arr[added].name >> employees_arr[added].age;
    cin >> employees_arr[added].salary >> employees_arr[added].gender;
    added++;
}

void print_employee() {
    for (int i = 0; i < added; ++i) {
        employee e = employees_arr[i];
        cout << e.name << " " << e.age << " " << e.salary << " "<< e.gender << "\n";
    }
}
int main() {
    read_employee();
    print_employee();
}

#include <iostream>
using namespace std;

struct employee {
    string name;
    int age;
    double salary;
    char gender;

    void read_employee() {
        cout << "Enter employee 4 entries: ";
        cin >> name >> age;
        cin >> salary >> gender;
    }

    void print_employee() {
        cout << name << " has salary " << salary << "\n";
    }

    int get_age() {
        return age;
    }
    void set_age(int new_age) {
        age = new_age;
    }
};

const int MAX = 100000;

employee employees_arr[MAX];
int added = 0;

void print_employees() {
    for (int i = 0; i < added; ++i) 
        employees_arr[i].print_employee();
}

int main() {
    employees_arr[added++].read_employee();
    employees_arr[added++].read_employee();
    print_employees();
    return 0;
}

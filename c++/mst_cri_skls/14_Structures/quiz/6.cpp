/*
   Guess ouptut
*/

#include <iostream>
using namespace std;

struct Employee {
    string name;
};

struct Manager {
    int mgr_id;
    Employee employee[10];
    int idx = 0;

    void AddEmployee(Employee e) {
        employee[idx++] = e;
    }
};

int main() {
    Employee e;
    e.name = "ali";

    Manager mgr;
    mgr.AddEmployee(e);
    mgr.AddEmployee(e);
    mgr.AddEmployee(e);

    cout << mgr.idx;

    return 0;
}

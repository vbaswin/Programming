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
    mgr.mgr_id = 10;

    Manager managers[7];

    // the value is stored in new object. Now we have 2 independent objects
    // in memory. If you change one of them, the second is not affected
    managers[0] = mgr;
    mgr.mgr_id = 77;

    cout << managers[0].mgr_id << "\n";

    return 0;
}

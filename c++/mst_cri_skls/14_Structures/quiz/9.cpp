/*
    Guess output
*/

#include <iostream>
using namespace std;
 
struct Employee {
    int num = 0;
    string name;
};
 
struct Manager {
    int mgr_id;
    Employee employees[10];
    int idx = 0;
 
    // e is passed by reference, it is copied by the array so the 
    // name won't be affected
    void AddEmployee(Employee &e) {
        e.num++;
        employees[idx] = e;
        employees[idx].name = "mostafa";
        ++idx;
    }
};
 
int main() {
    Employee e;
    e.name = "belal";
 
    Manager mgr;
    mgr.AddEmployee(e);
    mgr.AddEmployee(e);
    mgr.AddEmployee(e);
 
    cout << e.name << " " << e.num;
 
    return 0;
}

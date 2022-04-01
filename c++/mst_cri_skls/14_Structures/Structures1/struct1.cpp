/*
 Define a struct
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

int main() {
    return 0;
}

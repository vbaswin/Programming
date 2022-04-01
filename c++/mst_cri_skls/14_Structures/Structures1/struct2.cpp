/*
   Creating elements
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
    employee first = {"mostafa", 10, 1200.5, 'M'}; // to initilise :) 
    employees_arr[added++] = first; // substituting the value in first to the 
    // 0th index in employee array

    cout << first.name << "\n";

    employees_arr[added].name = "hani";
    employees_arr[added].age = 55;
    employees_arr[added].salary = 750;
    employees_arr[added].gender = 'M';
    added++;

    cout << employees_arr[added -2].name << "\n";
    cout << employees_arr[added -1].name << "\n";
    return 0;
}

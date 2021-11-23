/* 
include functions in Application question of 9 
*/

#include <iostream>
using namespace std;

const int max = 10000;
string names[max];
int ages[max];
int salarys[max];
char genders[max];

int added = 0;
void employee_det() {
    
    cout << "Enter name: ";
    cin >> names[added];
    cout << "Enter age: ";
    cin >> ages[added];
    cout << "Enter Salary: ";
    cin >> salarys[added];
    cout << "Enter gender: ";
    cin >> genders[added];
    ++added;
}

void print_det() {
    cout << "****************************\n";
    for (int i = 0; i < added; i++) {
        if (ages[i] != -1)
            cout << names[i] << " " << ages[i] << " " << salaries[i]
            << " " << genders[i] << "\n";
    }
}

void delete_by_age() {
    cout << "Enter start and end age: ";
    int start, end;
    cin >> start >> end;
    for (int i = 0; i < added; i++) {
        if (start <= ages[i] && ages[i] <= end)
            ages[i] = -1;
    }
}


void update_salary_by_name() {
    cout << "Enter name and salary: ";
    string name;
    int salary;
    cin >> name >> salary;

    bool is_found = false;
    for (int i = 0; i < added; i++) {
        if (ages[i] != -1 && names[i] == name) {
            salaries[i] == salary;
            is_found = true;
        }
    }
    if (!is_found)
        cout << "No employee with this name\n";
}
int menu() {
    int choice = -1;

    while (choice = -1) {
        cin >> choice;

        cout << "Enter your choice\n1) Add new employee\n";
        cout << "2) Print all employee\n3) Delete by age\n";
        cout << "4) Update salary by name\n5) Exit\n";


        if (choice < 1 && choice > 5) {
            cout << "Input between 1 & 5 only\n";
            choice = -1;
        }
    }

    return choice;
}

void employee_system() {
    while (true) {
        int choice= menu();

        if (choice == 1) 
            employee_det();
        else if(choice == 2)
            print_det();
        else if(choice == 3)
            delete_by_age();
        else if(choice == 4)
            update_salary_by_name();
        else
            break;
    }
}


int main() {
    employee_system();
    return 0;
}
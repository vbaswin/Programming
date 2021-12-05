/* 
include functions in Application question of 9 
*/

#include <iostream>
using namespace std;

const int MAX = 100000;
string names[MAX];
int ages[MAX];
double salaries[MAX];
char genders[MAX];

int added = 0;
int menu() {
    int choice = -1;

    while (choice == -1) {
    /* it will continue till we get any choice between 1 & 5 */
        cout << "\nEnter your choice\n1) Add new employee\n";
        cout << "2) Print all employee\n3) Delete by age\n";
        cout << "4) Update salary by name\n5) Exit\n";
        
        cin >> choice;


        if (choice < 1 && choice > 5) {
            cout << "Input between 1 & 5 only\n";
            choice = -1;
        }
    }

    return choice;
}

void employee_det() {
    
    cout << "Enter name: ";
    cin >> names[added];
    cout << "Enter age: ";
    cin >> ages[added];
    cout << "Enter Salary: ";
    cin >> salaries[added];
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
            salaries[i] = salary; // here not == but only = 
            is_found = true;
            break;
        }
    }
    if (!is_found)
        cout << "No employee with this name\n";
}

void employee_system() {
    while (true) {
    /* it will continue to ask till you enter choice 5 - to exit */
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

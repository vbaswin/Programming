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
}

int menu() {
    int choice = -1;

    while (choice = -1) {
        cin >> choice;
        if (choice < 1 && choice > 5) {
            cout << "Input between 1 & 5 only\n";
            choice = -1;
        }
    }

    return choice;
}

void employee_system() {
    int menu();

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


int main() {
    employee_system();
    return 0;
}
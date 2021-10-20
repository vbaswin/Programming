#include <iostream>
using namespace std;

int main() {
    const int max = 100000;
    string names[max];
    int ages[max];
    int salaries[max];
    char genders[max];

    int added = 0;
    while (true) {
        cout << "Enter your choice: \n";
        cout << "1) Add new employee: \n";
        cout << "2) Print all employees: \n";
        cout << "3) Delete by age: \n";
        cout << "4) Update salary by name: \n";

        int choice = -1;
        cin >> choice;
    
        if (!(1 <= choice && choice <= 4)) {
            cout << "Incorrect input\nTry again !\n";
            continue;
        }else {
            if (choice == 1) {
                cout << "Enter name: ";
                cin >> names[added];
                cout << "Enter age: ";
                cin >> ages[added];
                cout << "Enter salary: ";
                cin >> salaries[added];
                cout << "Enter gender: ";
                cin >> genders[added];
                ++added;
            }else if (choice == 2) {
                cout << "***************************\n";
                for (int i = 0; i < added; i++) {
                    if (ages[i] != -1)
                        cout << names[i] << " " << ages[i] << " "
                        << salaries[i] << " " << genders[i] << endl;
                }
            }else if (choice == 3) {
                cout << "Enter start and end age: ";
                int start, end;
                cin >> start >> end;
                for (int i = 0; i < added; i++) {
                    if (start <= ages[i] && ages[i] <= end)
                        ages[i] = -1;
                }
            }else {
                cout << "Enter the name and salary: ";
                string name;
                int salary;
                cin >> name >> salary;

                bool is_found = false;
                for (int i = 0; i < added; i++) {
                    if (name == names[i])
                        salaries[i] = salary;
                        is_found = true;
                        break;
                }
                if (!is_found)
                    cout << "No employee with this name\n";
            }
        }
        cout << endl;    
    }
    return 0;
}
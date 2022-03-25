/*
 to do the project once more
*/

#include <iostream>
using namespace std;

int menu() {
    cout << "Enter your choice\n";
    cout << "1) Add new patient\n";
    cout << "2) Print all patients\n";
    cout << "3) Get next patient\n";
    cout << "4) Exit\n";

    int choice;
    cin >> choice;
    return choice;
}

void hospital_system() {
    while(true) {
        int choice = menu();

        if (choice == 1)
            add_patient();
        else if(choice == 2)
            print_patients();
        else if(choice == 3)
            get_next_patient();
        else if (choice == 4)
            break;
        else
            cout << "\nIncorrect input\n";
    }
}

int main() {
    hospital_system();
    return 0;
}

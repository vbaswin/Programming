/*
   Doing the project once more using some of sir's tricks 
   same stuff here the specialization start from 1 - 20 
   whereas max_queue is from 0 - 4

   only trick borrowed passing array in shift left and shift right so 
   we just need to specify the 2nd parameter only while shifting
   - just check
*/

#include <iostream>
using namespace std;

const int MAX_SPECIALIZATION = 20, MAX_QUEUE = 5;

string names[MAX_SPECIALIZATION+1][MAX_QUEUE];
int status[MAX_SPECIALIZATION+1][MAX_QUEUE];
int queue_length[MAX_SPECIALIZATION+1];

int menu() {
    cout << "\nEnter your choice\n";
    cout << "1) Add new patient\n";
    cout << "2) Print all patients\n";
    cout << "3) Get next patient\n";
    cout << "4) Exit\n";

    int choice;
    cin >> choice;
    return choice;
}

void right_shift(int spec, string names_sp[], int status_sp[]) {
    for (int i = queue_length[spec]; i > 0; --i) {
        names_sp[i] = names_sp[i-1];
        status_sp[i] = status_sp[i-1];
    }
    ++queue_length[spec];
}

void add_patient() {
    int spec, stat;
    string name;
    cout << "Enter specialization, name and status: ";
    cin >> spec >> name >> stat;

    if (spec > 20 || spec < 1) {
        cout << "\nSpecialization not found\n";
        return;
    }
    int len = queue_length[spec];
    if (len == MAX_QUEUE) {
        cout << "\nSorry we can't add more patients for this specialization\n";
        return;
    }
    if (stat == 1) {
        right_shift(spec, names[spec], status[spec]);
        names[spec][0] = name;
        status[spec][0] = stat;
    }
    else {
        names[spec][len] = name;
        status[spec][len] = stat;
        ++queue_length[spec];
    }
}

void print_patient(int i, string names_sp[], int status_sp[]) {
    int len = queue_length[i];
    if (len == 0)
        return;
    cout << "\nThere are " << len << " patients in specialization " << i << "\n";
    for (int j = 0; j < len; ++j) {
        cout << names_sp[j];
        if (status_sp[j])
            cout << " urgent\n";
        else
            cout << " regular\n";
    }
}

void print_patients() {
    cout << "***********************************";

    for (int i = 1 ; i <= MAX_SPECIALIZATION; ++i) 
        print_patient(i, names[i], status[i]); // so you just need to specify the 
    // queue part only the other specialization part is given with the array
    // as a pointer
} 

void shift_left(int spec, string names_sp[], int status_sp[]) {
    for (int i = 0; i < queue_length[spec]; ++i) {
        names_sp[i] = names_sp[i+1];
        status_sp[i] = status_sp[i+1];
    }
    --queue_length[spec];
}

void get_next_patient() {
    int spec;
    cout << "Enter the specialization: ";
    cin >> spec;
    if (spec > 20 || spec < 1) {
        cout << "Specialization not found\n";
        return;
    }
    if (queue_length[spec] == 0) {
        cout << "\nNo patients at the moment. Have rest, Dr\n";
        return;
    }
    cout << names[spec][0] << " please go with Dr\n";
    shift_left(spec, names[spec], status[spec]);
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

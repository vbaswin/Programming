/*
    Hospital System

    ● Implement the following system for a hospital
    ● There are 20 different specialization (e.g. Children, Surgery, etc)
    ● For each specialization, there are only 5 available spots [queue]
    ● Adding a patient
        ○ Read the requested specialization [1-20].
        ○ Read his name and status (0 = regular, 1 urgent)
        ○ If 5 patients exist, apologize and don’t accept.
        ○ If the user is regular, add in end of queue. Otherwise, add in Begin
    ● Print patients, for the specializations that have waiting patients
    ● Dr pickup a patient
        ○ Read the requested specialization. If no patients, inform the doctor
        ○ Otherwise, ask the patient to go with the Dr. Remove from the queue
*/

#include <iostream>
using namespace std;

const int MAX_SPECIALIZATION = 20, MAX_QUEUE = 5;

// rows are 1-indexed and col 0-indexed --- most important
string name[MAX_SPECIALIZATION+1][MAX_QUEUE]; 
int status[MAX_SPECIALIZATION+1][MAX_QUEUE];
int queue[MAX_SPECIALIZATION+1];

void shift_right(int specl) {
    for (int i = queue[specl]; i > 0; --i) {
        name[specl][i] = name[specl][i -1];
        status[specl][i] = status[specl][i -1];
    }
}

void add_patient() {
    int specl, stat;
    string str;
    cout << "\nEnter specialization name status: ";
    cin >> specl >> str >> stat;
    if (specl > 20 || specl < 1) {
        cout << "\nspecilization not found\n";
        return;
    }
    if (queue[specl] >= 5) {
        cout << "\nSorry we can't add more patients to this specialization\n";
        return;
    }
    if (stat == 0) {
        name[specl][queue[specl]] = str;
        status[specl][queue[specl]] = stat;
    }
    if (stat == 1) {
        shift_right(specl);
        name[specl][0] = str;
        status[specl][0] = stat;
    }
    ++queue[specl];
};


void print_all() {
    cout << "*****************************************";
    for (int i = 1; i <= MAX_SPECIALIZATION; ++i) {
        if (queue[i] == 0)
            continue;
        cout << "\nThere are " << queue[i] << " patients in specialization "
            << i << "\n";
        for (int j = 0; j < queue[i]; ++j) {
            cout << name[i][j]; 
            if (status[i][j])
                cout << " urgent\n";
            else
                cout << " regular\n";
        }
    }
};

void shift_left(int specl) {
    for(int i = 0; i < queue[specl]; ++i) {
        name[specl][i] = name[specl][i +1];
        status[specl][i] = status[specl][i +1];
    }
    --queue[specl];
}

void get_next_patient() {
    int specl;
    cout << "\nEnter specialization: ";
    cin >> specl;
    if (specl > 20 || specl < 1) {
        cout << "\nspecilization not present\n";
        return;
    }
    if (queue[specl] == 0) {
        cout << "\nNo patients at the moment. Have rest Dr\n";
        return;
    }
    cout << name[specl][0] << " please go with Dr\n";
    shift_left(specl);
}

void menu() {
    int choice;
    while (true) {
        cout << "\nEnter your choice: \n";
        cout << "1) Add new patient\n";
        cout << "2) Print all patients\n";
        cout << "3) Get next patient\n";
        cout << "4) exit\n";
        cin >> choice;
        
        if (choice == 1)
            add_patient();
        else if (choice == 2)
            print_all();
        else if (choice == 3)
            get_next_patient();
        else if (choice == 4)
            break;
        else
            cout << "\nIncorrect input\n";
    }
}

int main() {
    menu();
    return 0;
}

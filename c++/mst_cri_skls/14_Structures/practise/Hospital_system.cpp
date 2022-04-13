/*
    Practice - Hospital System

    Let’s create hospital_queue, like the previous queue
        Variables
        string names[MAX_QUEUE];
        int status[MAX_QUEUE];
        int len;
        int spec;
        Provide same functionalities
    Let’s create hospital_system
        hospital_queue queues[MAX_SPECIALIZATION];
        Add the methods inside it using the hospital_queue change
*/

#include <iostream>
using namespace std;

const int MAX_QUEUE = 5;
const int MAX_SPECIALIZATION = 20;

struct hospital_queue {
    string names[MAX_QUEUE];
    int status[MAX_QUEUE];
    int len;
    int spec;

    hospital_queue() {
        len = 0;
        spec = -1;
    }

    hospital_queue(int _spec) {
        len = 0;
        spec = _spec;
    }

    void shift_right() {
        for (int i = len; i > 0; --i) {
            names[i] = names[i -1];
            status[i] = status[i -1];
        }
    }

    void print() {
        if (len == 0)
            return;
        cout << "\nThere are " << len << " patients in specialization " << spec 
            << "\n";
        for (int j = 0; j < len; ++j) {
            cout << names[j];
            if (status[j])
                cout << " urgent\n";
            else
                cout << " regular\n";
        }
    }

    void shift_left() {
        for(int i = 0; i < len; ++i) {
            names[i] = names[i + 1];
            status[i] = status[i + 1];
        }
        --len;
    }
};

void add_patient(struct hospital_queue queues[]) {
    int specl, stat;
    string str;
    cout << "\nEnter specialization name status: ";
    cin >> specl >> str >> stat;
    if (specl > 20 || specl < 1) {
        cout << "\nspecilization not found\n";
        return;
    }
    int length = queues[specl].len;
    if (length >= 5) {
        cout << "\nSorry we can't add more patients to this specialization\n";
        return;
    }

    if (stat == 0) {
        queues[specl].names[length] = str;
        queues[specl].status[length] = stat;
    }
    if (stat == 1) {
        queues[specl].shift_right();
        queues[specl].names[0] = str;
        queues[specl].status[0] = stat;
    }
    ++queues[specl].len;
};

void print_patients(struct hospital_queue queues[]) {
    cout << "***********************************";

    for (int i = 1 ; i <= MAX_SPECIALIZATION; ++i) 
        queues[i].print();
} 

void get_next_patient(struct hospital_queue queues[]) {
    int specl;
    cout << "\nEnter specialization: ";
    cin >> specl;
    if (specl > 20 || specl < 1) {
        cout << "\nspecilization not present\n";
        return;
    }
    if (queues[specl].len == 0) {
        cout << "\nNo patients at the moment. Have rest Dr\n";
        return;
    }
    cout << queues[specl].names[0] << " please go with Dr\n";
    queues[specl].shift_left();
}

void menu(struct hospital_queue queues[]) {
    int choice;
    while (true) {
        cout << "\nEnter your choice: \n";
        cout << "1) Add new patient\n";
        cout << "2) Print all patients\n";
        cout << "3) Get next patient\n";
        cout << "4) exit\n";
        cin >> choice;
        
        if (choice == 1)
            add_patient(queues);
        else if (choice == 2)
            print_patients(queues);
        else if (choice == 3)
            get_next_patient(queues);
        else if (choice == 4)
            break;
        else
            cout << "\nIncorrect input\n";
    }
}

int main() {
    hospital_queue queues[MAX_SPECIALIZATION+1];
    for (int i = 1; i <= MAX_SPECIALIZATION; ++i)
        queues[i] = hospital_queue(i);
    menu(queues);
    return 0;
}

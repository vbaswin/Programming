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

    bool add_end(string str, int stat) {
        if (len == MAX_QUEUE)
            return false;
        names[len] = str, status[len] = stat, ++len;
        return true;
    }
    
    bool add_front(string str, int stat) {
        if (len == MAX_QUEUE)
            return false;
        shift_right();
        names[0] = str, status[0] = stat, ++len;
        return true;
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

    void remove_front() {
        if (len == 0) {
            cout << "\nNo patients at the moment. Have rest Dr\n";
            return;
        }
        cout << names[0] << " please go with Dr\n";
        shift_left();
    }
};

struct hospital_system {
   hospital_queue queues[MAX_SPECIALIZATION+1];

   hospital_system() {
       for (int i = 1; i <= MAX_SPECIALIZATION; ++i)
           queues[i] = hospital_queue(i);
   }

   int menu() {
        cout << "\nEnter your choice: \n";
        cout << "1) Add new patient\n";
        cout << "2) Print all patients\n";
        cout << "3) Get next patient\n";
        cout << "4) exit\n";

        int choice;
        cin >> choice;
        return choice;
   }

   void run() {
       while (true) {
           int choice = menu();

           if (choice == 1)
               add_patient();
           else if (choice == 2)
               print_patients();
           else if (choice == 3)
               get_next_patient();
           else if (choice == 4)
               break;
           else
               cout << "\nIncorrect input\n";
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

        bool result;
        if (stat == 0) {
            result = queues[specl].add_end(str, stat);
        }
        if (stat == 1) {
            result = queues[specl].add_front(str, stat); 
        }
        if (!result)
            cout << "\nSorry we can't add more patients to this specialization\n";
    };

    void print_patients() {
        cout << "***********************************";

        for (int i = 1 ; i <= MAX_SPECIALIZATION; ++i) 
            queues[i].print();
    } 

    void get_next_patient() {
        int specl;
        cout << "\nEnter specialization: ";
        cin >> specl;
        if (specl > 20 || specl < 1) {
            cout << "\nspecilization not present\n";
            return;
        }
        queues[specl].remove_front();
    }

};

int main() {
    freopen("c.in", "rt", stdin);
    hospital_system hospital = hospital_system();
    hospital.run();
    return 0;
}

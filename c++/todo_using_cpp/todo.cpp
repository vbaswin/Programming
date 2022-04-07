#include <iostream>
#include <fstream>
using namespace std;

void display() {
    ifstream rf("todo.txt");
    string str;
    int n;
    char ch;
    while (true) {
        rf >> n >> ch;
        getline(rf, str);
        if (rf.eof())
            break;
        if (ch == 't')
            cout << n << "." << str << endl;
        else 
            cout << "\e[9m" << n << "." << str << "\e[0m" << endl;  
    }
}

void add() {
    string str, s;
    getline(cin, s);
    getline(cin, str);

    ifstream rf("todo.txt");
    int cnt = 1;
    while (getline(rf, s))
        ++cnt;
    rf.close();

    ofstream wf("todo.txt", ios::app);
    char ch = 't';
    wf << cnt << " " << ch << " " << str << endl;
    wf.close();
}

void delete_all_tasks() {
    ofstream wf("todo.txt");
}

void completed(int m) {
    int n;
    char ch;
    string str;

    ifstream rf("todo.txt");
    ofstream wf("todo_temp.txt");

    while (true) {
        rf >> n >> ch;
        getline(rf, str);

        if (rf.eof())
            break;
        
        if (n == m) {
            if (ch == 't') 
                wf << n << " c" << str << endl;
            else {
                cout << "\nIt's already done\n";
                return;
            }
        }
        else
            wf << n << " " << ch << str << endl;
    }
    rf.close();
    wf.close();

    ifstream rfile("todo_temp.txt");
    ofstream wfile("todo.txt");

    while (true) {
        rfile >> n >> ch;
        getline(rfile, str);

        if (rfile.eof())
            break;

        wfile << n << " " << ch << str << endl;
    }

    rfile.close();
    wfile.close();
    remove("todo_temp.txt");
}

void undo(int m) {
    int n;
    char ch;
    string str;

    ifstream rf("todo.txt");
    ofstream wf("todo_temp.txt");

    while (true) {
        rf >> n >> ch;
        getline(rf, str);

        if (rf.eof())
            break;
        
        if (n == m) {
            if (ch == 'c')
                wf << n << " t" << str << endl;
            else {
                cout << "\nIt's already not done\n";
                return;
            }
        }
        else
            wf << n << " " << ch << str << endl;
    }
    rf.close();
    wf.close();

    ifstream rfile("todo_temp.txt");
    ofstream wfile("todo.txt");

    while (true) {
        rfile >> n >> ch;
        getline(rfile, str);

        if (rfile.eof())
            break;

        wfile << n << " " << ch << str << endl;
    }

    rfile.close();
    wfile.close();
}
void menu(char *ch, int m) {
    if (*ch == 'a')
        add();
    else if (*ch == 'c')
        completed(m);
    else if (*ch == 'd')
        delete_all_tasks();
    else if (*ch == 'l');
    else if (*ch == 'u')
        undo(m);
}

int main(int argc, char** argv) {
    char* c1 = argv[1];
    char* c2 = argv[2];
    int m = atoi(c2);
    menu(c1, m);
    display();
    return 0;
}

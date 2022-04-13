#include <iostream>
#include <fstream>
using namespace std;

void help() {
    cout << "help\n";
}
void list() {
    cout << "list\n";
}
void clr_day() {}

void add(string task, char priority) {}
void done(int n) {}
void del(int n) {}
void redo(int n) {}

int main(int argc, char** argv) {

    if (argc == 1) {
        cout << "very few arguments\n";
        help();
    }
    else if (argc == 2) {
        string str = argv[1];
        if (str.compare("help") == 0) {
            help();
            return 0;
        }
        else if (str.compare("ls") == 0) {
            list();
            return 0;
        }
        else if (str.compare("clrday") == 0) {
            clr_day();
            return 0;
        }
        else {
            cout << "very few or incorrect arguments\n";
            help();
        }
    }
    else if (argc == 3) {
        string str = argv[1];
        if (str.compare("done") == 0) {
            int n = atoi(argv[2]);
            done(n);
        }
        else if (str.compare("del") == 0) {
            int n = atoi(argv[2]);
            del(n);
        }
        else if (str.compare("redo") == 0) {
            int n = atoi(argv[2]);
            redo(n);
        }
        else if (str.compare("add") == 0) {
            string task = argv[2];
            cout << task << endl;
        }
        else {
            cout << "very few or incorrect arguments\n";
            help();
        }
    }
    return 0;
}

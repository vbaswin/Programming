#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;

int main() {
    int n = 1;
    string str = "strikethrough";
    ofstream wfile("todo_aswin.txt");

    if (wfile.fail()) {
        cout << "Can't open file";
        return 0;
    }
    wfile << n << " " << str << "\n";
    // wfile << n << " " << str << "\n";
    wfile.close();

    int num;
    string s;
    ifstream rfile("todo_aswin.txt");
    while(true) {
        rfile >> num >> s; // if you put this below you will get another answer :(
        if (rfile.eof())
            break;
        cout << num << " "<< s << endl;
    }
    rfile.close();

    time_t now = time(0);
    char* dt = ctime(&now);
    // cout << dt << endl;

    tm *ltm = localtime(&now);

    cout << 1900 + ltm->tm_year << " " << 1 + ltm->tm_mon << " " << ltm->tm_mday 
        << endl;

    return 0;
}

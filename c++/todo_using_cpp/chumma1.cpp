#include <iostream>
#include <fstream>
using namespace std;


int main() {
    ifstream rfile("aswin.txt");
    if (rfile.fail()) {
        cout << "Can't open file";
        return 0;
    }
    char c;
    int n;
    string str;
    while (true) {
        rfile >> n;
        rfile >> c;
        getline(rfile, str);
        if (rfile.eof())
            break;
        cout << n << endl;
        cout << c << endl;
    }
    return 0;
}

/***** 
6:quiz
*****/

#include <iostream>
using namespace std;

int main() {
    string name1, name2;
    cin >> name1; // this reads word mustafa and stop there before the \n
    getline(cin, name2);// is input. Then getline(cin, name2); just reads
    // nothing as nothing more left on the line
    cout << name1 << " " << name2 << endl;

    string name3, name4;
    cin >> name3; 
    getline(cin, name4); // with 2 getlines, the first finish the line and 
    getline(cin, name4); // and move to the next line. Then the 2nd getline
    // reads the actual line
    cout << name3 << " " << name4 << endl;

    return 0;
}
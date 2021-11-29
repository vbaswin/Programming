#include <iostream>
using namespace std;

int main() {

    // for internal reasons, c++ wanna you to tell it when the string ends
    // (for easy print)
    // We add an extra char to do so
    char name1[4];

    name1[0] = 'H';
    name1[1] = 'a';
    name1[2] = 'n';
    name1[3] = 'i';

    cout << name1 << "\n";

    // rigth way 
    // 1 + size 

    char name2[5];

    name2[0] = 'H';
    name2[1] = 'a';
    name2[2] = 'n';
    name2[3] = 'i';
    name2[4] = '\0'; // null character

    cout << name2 << "\n";

// print stops once sees the null char - terminator tells compiler where
// to stop reading the char array
// letters after it won't be printed

    char name3[5];
     
    name3[0] = 'H';
    name3[1] = '\0';
    name3[2] = 'n';
    name3[3] = 'i';
    name3[4] = '\0';

    cout << name3 << "\n";

    return 0;
}
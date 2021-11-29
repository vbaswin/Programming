/****** 
10:quiz
******/

#include <iostream>
using namespace std;

int main() {

    // common mistake is to print extra space/character after list 
    // printing. How to avoid?!
    string words[] {"Cpp", "is", "challenging"};

    string all;
    for (int i = 0; i < 3; ++i) {
        all += words[i] + ",";
    }

    cout << all << endl;
    return 0;
}
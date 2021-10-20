/******************************************
input and outputs with different data types
******************************************/

#include <iostream>
using namespace std;

int main()
{
    // age
    int age;
    cout << "Enter your age : ";
    cin  >> age;

    // weight
    double weight;
    cout << "Enter your weight : ";
    cin  >> weight;

    // group
    char group;
    cout << "Enter your group : ";
    cin  >> group;

    // name
    string name;
    cout << "Enter your name : ";
    cin  >> name;

    // conclusion
    cout << "I am "<< name << "belongs to the group " << group << "\nMy weight is " << weight << "\nAnd my age is " << age << ".";

    return 0;

}





















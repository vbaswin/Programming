/******************************************************************
Write a program that reads 2 students information about math exam
     * read per student: name, id and grade
     * print them according to the conclusion
*****************************************************************/

#include <iostream>
using namespace std;

int main()
{
    // first_student_name
    string first_student_name;
    cout << "What is the first student's name? : ";
    cin  >> first_student_name;

    // id
    int id;
    cout << "What is his Id? : ";
    cin  >> id;

    // exam grade
    double exam_grade;
    cout << "What is his exam grade? : ";
    cin >> exam_grade;

    // second_student_name
    string second_student_name;
    cout << "What is the second student's name? : ";
    cin  >> second_student_name;

    // id_2
    int id_2;
    cout << "What is his id? : ";
    cin  >> id_2;

    // exam_grade_2
    double exam_grade_2;
    cout << "What is his exam grade? : ";
    cin >> exam_grade_2;

    // conclusion
    cout << "\n\n" ;
    cout << "Students grade in maths.\n";
    cout << first_student_name  << " (with id " << id   << ")" << " got grade : " << exam_grade   << "\n";
    cout << second_student_name << " (with id " << id_2 << ")" << " got grade : " << exam_grade_2 << "\n";

    return 0;


}


































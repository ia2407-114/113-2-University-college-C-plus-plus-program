#include <iostream>
#include <string>
#include "GradeBook.h"
using namespace std;

int main()
{
    string nameOfCourse;
    int age;
    GradeBook myGradeBook("dog", 10);
    cout << "�d���W��: " << myGradeBook.getCourseName() << endl;
    cout << "�d���~��: " << myGradeBook.getage() << endl;
    cout << "�п�J�s���d���W��:";
    getline(cin, nameOfCourse);
    cout << "�п�J�s���d���~��:";
    cin >> age;
    myGradeBook.setage(age);
    myGradeBook.setCourseName(nameOfCourse);
    myGradeBook.displayMessage();
}
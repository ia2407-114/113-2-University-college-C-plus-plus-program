#include <iostream>
#include <string>
#include "gradebook.h"
using namespace std;

int main()
{
    string nameOfCourse; //string�O�w�s���O
    GradeBook myGradeBook("Computer Networks"); // create a GradeBook �O�ϥΪ̦ۭq���O
    int pass = 1234;
    cout << "Initial course name is: " << myGradeBook.getCourseName()<< endl;
    cout << "\nPlease enter the course name:" << endl;
    getline(cin, nameOfCourse);
    myGradeBook.setCourseName(nameOfCourse);
    cout << endl;
    myGradeBook.displayMessage();
} 
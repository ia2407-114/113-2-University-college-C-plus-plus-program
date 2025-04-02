#include <iostream>
#include <string> // program uses C++ standard string class
#include "gradebook.h"
using namespace std;

GradeBook::GradeBook(string name)
{
    courseName = name;
}

void GradeBook::setCourseName(string name)
{
    if (name != "")
        courseName = name; 
    else
        cout << "empty string!!!" << endl;
}

string GradeBook::getCourseName() const
{
    return courseName;
} 

void GradeBook::displayMessage() const
{
    cout << "Welcome to the grade book for\n" << getCourseName() << "!" << endl;
}
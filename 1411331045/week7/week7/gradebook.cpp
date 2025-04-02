#include <iostream>
#include <string>
#include "gradebook.h"
using namespace std;
GradeBook::GradeBook(string name)
{
    courseName = name;
}
void GradeBook::setCourseName(string name)
{
    if (name != "")
        courseName = name; // store the course name in the object
    else
        cout << "empty string!!!" << endl;

} // end function setCourseName
string GradeBook::getCourseName() const
{
    //string empty = "";
    //if (pass == 999)
    return courseName; // return the object's courseName
// else
     //cout << "Wrong password" << endl;

} // end function getCourseName
void GradeBook:: displayMessage() const
{
    // this statement calls getCourseName to get the 
    // name of the course this GradeBook represents
    cout << "Welcome to the grade book for\n" << getCourseName() << "!" << endl;
} // end function displayMessage
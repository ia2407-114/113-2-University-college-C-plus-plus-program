#include <iostream>
#include <string> // program uses C++ standard string class
using namespace std;
#include "gradebook.h"

int main()
{
    string nameOfCourse; //string是庫存類別  string of characters to store the course name
    GradeBook myGradeBook("Computer Networks"); // create a GradeBook 是使用者自訂類別 object named myGradeBook
    int pass = 1234;
    // display initial value of courseName
    cout << "Initial course name is: " << myGradeBook.getCourseName()
        << endl;

    // prompt for, input and set course name
    cout << "\nPlease enter the course name:" << endl;
    getline(cin, nameOfCourse); // read a course name with blanks
    myGradeBook.setCourseName(nameOfCourse); // set the course name

    cout << endl; // outputs a blank line
    myGradeBook.displayMessage(); // display message with new course name
} // end main
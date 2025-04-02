// week7_today0402.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//
#include <iostream>
#include <string> // program uses C++ standard string class
#include "gradeBook.h"
using namespace std;

// GradeBook class definition

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



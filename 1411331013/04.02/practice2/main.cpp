#include <iostream>
#include <string>
#include "gradebook.h"
using namespace std;

int main()
{
    string nameOfCourse; //string是庫存類別
    GradeBook myGradeBook("Computer Networks"); // create a GradeBook 是使用者自訂類別
    int pass = 1234;
    cout << "Initial course name is: " << myGradeBook.getCourseName()<< endl;
    cout << "\nPlease enter the course name:" << endl;
    getline(cin, nameOfCourse);
    myGradeBook.setCourseName(nameOfCourse);
    cout << endl;
    myGradeBook.displayMessage();
} 
#include <iostream>
#include <string> // program uses C++ standard string class
using namespace std;

class GradeBook
{
public:
    explicit  GradeBook(string name);
    
    // function that sets the course name
    void setCourseName(string name);
    
    // function that gets the course name
    string getCourseName() const;
    
    // function that displays a welcome message
    void displayMessage() const;
    
private:
    string courseName; // course name for this GradeBook
}; // end class GradeBook  #pragma once

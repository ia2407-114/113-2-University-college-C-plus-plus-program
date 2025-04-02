#include <iostream>
#include <string> 
using namespace std;

class GradeBook
{
public:
    explicit  GradeBook(string name);
    void setCourseName(string name);
    string getCourseName() const;
    void displayMessage() const;
private:
    string courseName; // course name for this GradeBook
}; // end class GradeBook  

// function main begins program execution
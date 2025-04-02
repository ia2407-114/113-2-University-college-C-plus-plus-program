#include <iostream>
#include <string> // program uses C++ standard string class
using namespace std;

// GradeBook class definition
class GradeBook
{
public:
    explicit  GradeBook(string name)
    {
        courseName = name;
    }
    // function that sets the course name
    void setCourseName(string name)
    {
        if (name != "")
            courseName = name; // store the course name in the object
        else
            cout << "empty string!!!" << endl;

    } // end function setCourseName

    // function that gets the course name
    string getCourseName() const
    {
        //string empty = "";
        //if (pass == 999)
        return courseName; // return the object's courseName
   // else
        //cout << "Wrong password" << endl;

    } // end function getCourseName

    // function that displays a welcome message
    void displayMessage() const
    {
        // this statement calls getCourseName to get the 
        // name of the course this GradeBook represents
        cout << "Welcome to the grade book for\n" << getCourseName() << "!" << endl;
    } // end function displayMessage
private:
    string courseName; // course name for this GradeBook
}; // end class GradeBook

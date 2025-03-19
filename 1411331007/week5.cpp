// Fig. 3.1: fig03_01.cpp
// Define class GradeBook with a member function displayMessage;
// Create a GradeBook object and call its displayMessage function.
#include <iostream>
using namespace std;

// GradeBook class definition
class GradeBook
{
public:
    // function that displays a welcome message to the GradeBook user
    void displayMessage() const
    {
        cout << "Welcome to the Grade Book!" << endl;
    } // end function displayMessage
    void changeID()
    {
        cout << "輸入你的號碼:" << endl;
        cin >> myID;
    }
    void printID()
    {
        cout << "你的號碼:" <<myID<<endl;
    }

private:
    int myID = 0;
}; // end class GradeBook  

// function main begins program execution
int main()
{
    GradeBook myGradeBook; // create a GradeBook object named myGradeBook
    myGradeBook.displayMessage();
    myGradeBook.printID();// call object's displayMessage function 
    myGradeBook.changeID();
    myGradeBook.printID();


} // end main
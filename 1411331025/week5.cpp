// Fig. 3.1: fig03_01.cpp
// Define class GradeBook with a member function displayMessage;
// Create a GradeBook object and call its displayMessage function.
#include <iostream>
using namespace std;

// GradeBook class definition
class GradeBook
{

private:
    int myID=5;

public:
    // function that displays a welcome message to the GradeBook user
    void displayMessage() const
    {
        cout << "Welcome to the Grade Book!" << endl;
    } // end function displayMessage
    void changeID(int newID)
    {
        myID = newID;
    }

    void printID()const
    {
        cout << "the current ID is:" << myID << endl;
    }
}; 

// function main begins program execution
int main()
{
    GradeBook myGradeBook; // create a GradeBook object named myGradeBook
    myGradeBook.displayMessage(); // call object's displayMessage function	

    myGradeBook.printID();

    // Change the ID to a new value
    int newID;
    cout << "請輸入新的ID:";
    cin >> newID;

    myGradeBook.changeID(newID);

    // Print the modified ID
    myGradeBook.printID();

    return 0;  
} // end main
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
        cout << "請輸入ID " << endl;
        cin >> myID;
    }
    void printID() {
        cout << "我的ID" <<myID<< endl;
    }
private:
    int myID = 47;

}; // end class GradeBook  

// function main begins program execution
int main()
{
    GradeBook myID; // create a GradeBook object named myGradeBook
    myID.displayMessage(); // call object's displayMessage function 
    myID.printID();
    myID.changeID();
    myID.printID();
} // end main
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
        cout << "請輸入ID" << endl;
        cin >> myID;
    }
    void printID()
    {
        cout << "我的ID:" << myID << endl;
    }
private:
    int myID = 0;
}; // end class GradeBook  

// function main begins program execution
int main()
{
    GradeBook myGradeBook, book1, book2, book3; // create a GradeBook object named myGradeBook
    myGradeBook.displayMessage();
    myGradeBook.printID();
    myGradeBook.changeID();
    myGradeBook.printID();

//} // end main
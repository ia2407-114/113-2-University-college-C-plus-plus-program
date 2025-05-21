// Fig. 3.1: fig03_01.cpp week5
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
    void changeScore()
    {
        cout << "輸入您的Score:";
        cin >> myScore;
        while (myScore > 99 || myScore < 0)
        {
            cout << "成績不可超過99或小於0"<<endl;
            cout << "請重新輸入您的Score!!" << endl;
            cout << "輸入您的Score:";
            cin >> myScore;
        } 
    }
    void printScore()
    {
        cout << "您的Score:" << myScore << endl;
       
    }

private:
    int myScore = 1;



}; // end class GradeBook  

// function main begins program execution
int main()
{
    GradeBook myGradeBook; // create a GradeBook object named myGradeBook
    myGradeBook.displayMessage(); // call object's displayMessage function 
    myGradeBook.printScore();
    myGradeBook.changeScore();
    myGradeBook.printScore();
} // end main

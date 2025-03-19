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
    void changeid() 
    {
        cout << "目前的id:" << endl;
        cin >> myid;

    }  
    void printid() 
    {
        cout << "目前的id:" << myid << endl;


    }
private:
    int myid = 3;
}; // end class GradeBook  

// function main begins program execution
int main()
{
    GradeBook myGradeBook; // create a GradeBook object named myGradeBook
    myGradeBook.printid(); // call object's displayMessage function 
    myGradeBook.changeid();
    myGradeBook.printid();
} // end main
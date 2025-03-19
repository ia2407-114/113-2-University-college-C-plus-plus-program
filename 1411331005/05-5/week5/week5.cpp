#include <iostream>
using namespace std;

// GradeBook class definition
class GradeBook
{
private:
    int myID;

public:
    GradeBook(int id) : myID(id) {}

    // function that displays a welcome message to the GradeBook user
    void displayMessage() const
    {
        cout << "Welcome to the Grade Book!" << endl;
    }

    void printID() const
    {
        cout << "目前ID: " << myID << endl;
    }

    void changeID(int newID)
    {
        cout << "輸入新的ID: ";
        cin >> newID;
        myID = newID;
    }
};

// function main begins program execution
int main()
{
    int newID{};
    GradeBook myGradeBook(1001); 
    myGradeBook.displayMessage(); // 呼叫 displayMessage()

    myGradeBook.printID(); // 印出目前 ID
    
    myGradeBook.changeID(newID);//新ID

    myGradeBook.printID();
}
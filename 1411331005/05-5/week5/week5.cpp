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
        cout << "�ثeID: " << myID << endl;
    }

    void changeID(int newID)
    {
        cout << "��J�s��ID: ";
        cin >> newID;
        myID = newID;
    }
};

// function main begins program execution
int main()
{
    int newID{};
    GradeBook myGradeBook(1001); 
    myGradeBook.displayMessage(); // �I�s displayMessage()

    myGradeBook.printID(); // �L�X�ثe ID
    
    myGradeBook.changeID(newID);//�sID

    myGradeBook.printID();
}
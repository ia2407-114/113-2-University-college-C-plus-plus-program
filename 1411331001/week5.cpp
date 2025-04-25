#include <iostream>
using namespace std;

class GradeBook
{
public:
    GradeBook() : myID(1) {}

    void displayMessage() const
    {
        cout << "Welcome to the Grade Book!" << endl;
    }

    void changeID()
    {
        cout << "�п�J�s��ID: ";
        cin >> myID;
    }

    void printID() const
    {
        cout << "�ثeID: " << myID << endl;
    }

private:
    int myID;
};

int main()
{
    GradeBook myGradeBook;

    myGradeBook.displayMessage();
    myGradeBook.printID();

    myGradeBook.changeID();
    myGradeBook.printID();

    return 0;
}


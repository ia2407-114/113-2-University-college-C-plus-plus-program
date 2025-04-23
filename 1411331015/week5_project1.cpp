#include <iostream>
using namespace std;

class GradeBook
{
private:
    int myID;

    void displayMessage() const
    {
        cout << "�w��Ө즨�Zï!" << endl;
    }

public:
    GradeBook(int id) : myID(id) {}

    void printID() const
    {
        cout << "�ثe ID: " << myID << endl;
    }

    void changeID(int newID)
    {
        myID = newID;
    }
};

int main()
{
    int initialID = 1411331015;
    GradeBook myGradeBook(initialID);

    myGradeBook.printID();

    int newID;
    cout << "�п�J�s�� ID: ";
    cin >> newID;
    cout << "�ª� ID: " << initialID << endl;
    myGradeBook.changeID(newID);

    myGradeBook.printID();

    return 0;
}

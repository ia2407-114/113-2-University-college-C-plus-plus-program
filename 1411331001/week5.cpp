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
        cout << "請輸入新的ID: ";
        cin >> myID;
    }

    void printID() const
    {
        cout << "目前ID: " << myID << endl;
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


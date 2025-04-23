#include <iostream>
using namespace std;

class GradeBook
{
private:
    int myID;

    void displayMessage() const
    {
        cout << "歡迎來到成績簿!" << endl;
    }

public:
    GradeBook(int id) : myID(id) {}

    void printID() const
    {
        cout << "目前 ID: " << myID << endl;
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
    cout << "請輸入新的 ID: ";
    cin >> newID;
    cout << "舊的 ID: " << initialID << endl;
    myGradeBook.changeID(newID);

    myGradeBook.printID();

    return 0;
}

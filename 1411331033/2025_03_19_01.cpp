#include <iostream>
using namespace std;

class GradeBook
{
public:
    void displayMessage() const
    {
        cout << "Welcome to the Grade Book!" << endl;
    }
    void changeID()
    {
		cout << "�п�J�A�n��諸�Ʀr:" << endl;
		cin >> myID;
    }
    void printID()
    {
		cout << "�A���{�b���Z��:" << myID << endl;
    }
private:
    int myID = 0;
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
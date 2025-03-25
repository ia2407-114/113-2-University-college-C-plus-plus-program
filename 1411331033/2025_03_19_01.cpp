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
		cout << "請輸入你要更改的數字:" << endl;
		cin >> myID;
    }
    void printID()
    {
		cout << "你的現在成績為:" << myID << endl;
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
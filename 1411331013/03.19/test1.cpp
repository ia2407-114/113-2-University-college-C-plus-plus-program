#include <iostream>
using namespace std;

class GradeBook
{
public:
    void displayMessage() const
    {
        cout << "Welcome to the Grade Book!" << endl;
    }
    void changScore()
    {
        cout << "請輸入成績:" << endl;
        cin >> myScore;
    }
    void printScore()
    {
        cout << "我的成績" << myScore << endl;
    }

private:
    int myScore = 0;
};

int main()
{
    GradeBook myGradeBook;
    myGradeBook.displayMessage();
    myGradeBook.printScore();
    myGradeBook.changScore();
    myGradeBook.printScore();
} 
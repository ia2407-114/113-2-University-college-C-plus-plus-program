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
        cout << "�п�J���Z:" << endl;
        cin >> myScore;
    }
    void printScore()
    {
        cout << "�ڪ����Z" << myScore << endl;
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
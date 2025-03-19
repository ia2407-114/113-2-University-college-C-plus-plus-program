#include <iostream>
using namespace std;

// GradeBook class definition
class GradeBook//���O����
{
public://�s������
    // function that displays a welcome message to the GradeBook user
    void displayMessage() const
    {
        cout << "Welcome to the Grade Book!" << endl;
    }

    // �ק令�Z
    void changeScore()//�������
    {
        cout << "�п�J���Z: ";
        cin >> myScore;
    }

    // �L�X���Z
    void printScore() const
    {
        cout << "�ڪ����Z: " << myScore << endl;
    }

    // �ק� ID
    void changeID()
    {
        cout << "�п�J�s�� ID: ";
        cin >> myID;
    }

    // �L�X ID
    void printID() const
    {
        cout << "�ثe ID: " << myID << endl;
    }

private://�����ܼ�
    int myScore = 0; // ���Z
    int myID = 3;    // �w�] ID
};


// function main begins program execution
int main()
{
    GradeBook myGradeBook; // create a GradeBook object named myGradeBook ����ŧi

    myGradeBook.displayMessage(); // call object's displayMessage function

    // �L�X�w�] ID
    myGradeBook.printID();

    // �ק� ID
    myGradeBook.changeID();  // <-- �o�̭ץ��A���ݭn�ǤJ�Ѽ�

    // �A���L�X ID
    myGradeBook.printID();

    // �L�X�w�]���Z
    myGradeBook.printScore();

    // �ק令�Z
    myGradeBook.changeScore();

    // �A���L�X���Z
    myGradeBook.printScore();

    return 0;
}

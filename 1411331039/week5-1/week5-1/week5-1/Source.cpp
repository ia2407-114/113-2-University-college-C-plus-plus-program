#include <iostream>
#include <string> // �ϥ�C++�зǦr�����O
using namespace std;

// GradeBook���O�w�q
class GradeBook
{
public:
    // �c�y��ơA�]�w�ҵ{�W�٪��w�]��
    GradeBook(string name = "���]�ҵ{�W��")
    {
        courseName = name;
    }

    // �]�w�ҵ{�W��
    void setCourseName(string name)
    {
        courseName = name; // �N�ҵ{�W���x�s�b����
    } // ����setCourseName���

    // ���o�ҵ{�W��
    string getCourseName() const
    {
        return courseName; // �^�Ǫ��󪺽ҵ{�W��
    } // ����getCourseName���

    // ����w��T��
    void displayMessage() const
    {
        cout << "�w��Ө�ҵ{�u" << getCourseName() << "�v�����Z��I" << endl;
    } // ����displayMessage���

    // �]�w���Z
    void setGrade(int grade)
    {
        if (grade >= 0 && grade <= 99) {
            this->grade = grade; // �]�w���Ī����Z
        }
        else {
            cout << "���~�G���Z�����b0��99�����I" << endl;
        }
    }

    // ���o���Z
    int getGrade() const
    {
        return grade; // �^�Ǧ��Z
    }

private:
    string courseName; // �ҵ{�W��
    int grade = 0; // ���Z�A��l��0
}; // ����GradeBook���O

// main��ơA�{������}�l
int main()
{
    string nameOfCourse; // �s�x�ҵ{�W�٪��r���ܼ�
    GradeBook myGradeBook; // �إߤ@��GradeBook����

    // ��ܪ�l���ҵ{�W��
    cout << "��l�ҵ{�W�٬��G" << myGradeBook.getCourseName() << endl;

    // ���ܥΤ��J�ҵ{�W��
    cout << "\n�п�J�ҵ{�W�١G" << endl;
    getline(cin, nameOfCourse); // Ū���]�t�Ů檺�ҵ{�W��
    myGradeBook.setCourseName(nameOfCourse); // �]�w�ҵ{�W��

    // ����w��T��
    cout << endl;
    myGradeBook.displayMessage();

    // ��ܪ�l���Z
    cout << "\n��l���Z���G" << myGradeBook.getGrade() << endl;

    // ���ܥΤ��J���Z
    int newGrade;
    cout << "\n�п�J���Z�]0-99�^�G" << endl;
    cin >> newGrade;

    // �]�w����ܷs�����Z
    myGradeBook.setGrade(newGrade);
    cout << "\n�ק�᪺���Z���G" << myGradeBook.getGrade() << endl;

    return 0;
} // ����main���
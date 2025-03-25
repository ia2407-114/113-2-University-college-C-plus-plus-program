#include <iostream>
using namespace std;

class GradeBook
{
public:
    void setCourseName(int name)
    {
        if (name >= 0 && name <= 99) {
            courseName = name;
            cout << endl;
        }
        else
        {
            while (name < 0 || name > 99)
            {
                cout << "���~�A���Z����j��99�Τp��0" << endl;
                cout << "�Э��s��J:";
                cin >> name;
            }
            courseName = name;
            cout << endl;
        }
        
    }
    int getCourseName() const
    {
        return courseName;
    }
    void displayMessage() const
    {
        cout << "�w��Ө즨�Z�U\n�z�����Z�O�G" << getCourseName() << endl;
    }
private:
    int courseName = 0;
};

int main()
{
    int a = 0;
    GradeBook myGradeBook;
    cout << "��l���Z���G" << myGradeBook.getCourseName();
    cout << "\n�п�J�s���Z�]0~99�^�G";
    while (cin >> a)
    {
        myGradeBook.setCourseName(a);
        myGradeBook.displayMessage();
        cout << "\n�п�J�s���Z�]0~99�^�G";
    }
    
}

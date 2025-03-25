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
                cout << "錯誤，成績不能大於99或小於0" << endl;
                cout << "請重新輸入:";
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
        cout << "歡迎來到成績冊\n您的成績是：" << getCourseName() << endl;
    }
private:
    int courseName = 0;
};

int main()
{
    int a = 0;
    GradeBook myGradeBook;
    cout << "初始成績為：" << myGradeBook.getCourseName();
    cout << "\n請輸入新成績（0~99）：";
    while (cin >> a)
    {
        myGradeBook.setCourseName(a);
        myGradeBook.displayMessage();
        cout << "\n請輸入新成績（0~99）：";
    }
    
}

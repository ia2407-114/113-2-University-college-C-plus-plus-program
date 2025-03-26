#include <iostream>
#include <string>
using namespace std;

class GradeBook
{
public:
    explicit  GradeBook(string name, int newage)
    {
        courseName = name;
        age = newage;
    }
    void setCourseName(string name)
    {
        if (name != "")
            courseName = name;
        else
            cout << "empty string!!!" << endl;

    } 
    void setage(int newage)
    {
        while (newage < 0 || newage >= 20)
        {
            cout << "錯誤，寵物年紀無法超過20或小於1，請重新設定" << endl;
            cout << "請輸入新的寵物年齡:";
            cin >> newage; 
        }
         age = newage;
    }

    string getCourseName() const
    {
        return courseName;
    }
    
    int getage() const
    {
        return age;
    }

    void displayMessage() const
    {

        cout << "新的寵物名稱為:" << getCourseName() << endl;
        cout << "新的寵物年齡為:" << getage() << endl;
    } 
private:
    string courseName;
    int age = 1;
}; 

int main()
{
    string nameOfCourse;
    int age;
    GradeBook myGradeBook("dog",10);
    cout << "寵物名稱: " << myGradeBook.getCourseName() << endl;
    cout << "寵物年齡: " << myGradeBook.getage() << endl;
    cout << "請輸入新的寵物名稱:";
    getline(cin, nameOfCourse);
    cout << "請輸入新的寵物年齡:";
    cin >> age;
    myGradeBook.setage(age);
    myGradeBook.setCourseName(nameOfCourse);
    myGradeBook.displayMessage(); 
}
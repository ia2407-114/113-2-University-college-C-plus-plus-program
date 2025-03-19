#include <iostream>
using namespace std;

// GradeBook class definition
class GradeBook//類別物件
{
public://存取控制
    // function that displays a welcome message to the GradeBook user
    void displayMessage() const
    {
        cout << "Welcome to the Grade Book!" << endl;
    }

    // 修改成績
    void changeScore()//成員函數
    {
        cout << "請輸入成績: ";
        cin >> myScore;
    }

    // 印出成績
    void printScore() const
    {
        cout << "我的成績: " << myScore << endl;
    }

    // 修改 ID
    void changeID()
    {
        cout << "請輸入新的 ID: ";
        cin >> myID;
    }

    // 印出 ID
    void printID() const
    {
        cout << "目前 ID: " << myID << endl;
    }

private://成員變數
    int myScore = 0; // 成績
    int myID = 3;    // 預設 ID
};


// function main begins program execution
int main()
{
    GradeBook myGradeBook; // create a GradeBook object named myGradeBook 物件宣告

    myGradeBook.displayMessage(); // call object's displayMessage function

    // 印出預設 ID
    myGradeBook.printID();

    // 修改 ID
    myGradeBook.changeID();  // <-- 這裡修正，不需要傳入參數

    // 再次印出 ID
    myGradeBook.printID();

    // 印出預設成績
    myGradeBook.printScore();

    // 修改成績
    myGradeBook.changeScore();

    // 再次印出成績
    myGradeBook.printScore();

    return 0;
}

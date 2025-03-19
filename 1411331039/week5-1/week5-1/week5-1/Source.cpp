#include <iostream>
#include <string> // 使用C++標準字串類別
using namespace std;

// GradeBook類別定義
class GradeBook
{
public:
    // 構造函數，設定課程名稱的預設值
    GradeBook(string name = "未設課程名稱")
    {
        courseName = name;
    }

    // 設定課程名稱
    void setCourseName(string name)
    {
        courseName = name; // 將課程名稱儲存在物件中
    } // 結束setCourseName函數

    // 取得課程名稱
    string getCourseName() const
    {
        return courseName; // 回傳物件的課程名稱
    } // 結束getCourseName函數

    // 顯示歡迎訊息
    void displayMessage() const
    {
        cout << "歡迎來到課程「" << getCourseName() << "」的成績單！" << endl;
    } // 結束displayMessage函數

    // 設定成績
    void setGrade(int grade)
    {
        if (grade >= 0 && grade <= 99) {
            this->grade = grade; // 設定有效的成績
        }
        else {
            cout << "錯誤：成績必須在0到99之間！" << endl;
        }
    }

    // 取得成績
    int getGrade() const
    {
        return grade; // 回傳成績
    }

private:
    string courseName; // 課程名稱
    int grade = 0; // 成績，初始為0
}; // 結束GradeBook類別

// main函數，程式執行開始
int main()
{
    string nameOfCourse; // 存儲課程名稱的字串變數
    GradeBook myGradeBook; // 建立一個GradeBook物件

    // 顯示初始的課程名稱
    cout << "初始課程名稱為：" << myGradeBook.getCourseName() << endl;

    // 提示用戶輸入課程名稱
    cout << "\n請輸入課程名稱：" << endl;
    getline(cin, nameOfCourse); // 讀取包含空格的課程名稱
    myGradeBook.setCourseName(nameOfCourse); // 設定課程名稱

    // 顯示歡迎訊息
    cout << endl;
    myGradeBook.displayMessage();

    // 顯示初始成績
    cout << "\n初始成績為：" << myGradeBook.getGrade() << endl;

    // 提示用戶輸入成績
    int newGrade;
    cout << "\n請輸入成績（0-99）：" << endl;
    cin >> newGrade;

    // 設定並顯示新的成績
    myGradeBook.setGrade(newGrade);
    cout << "\n修改後的成績為：" << myGradeBook.getGrade() << endl;

    return 0;
} // 結束main函數
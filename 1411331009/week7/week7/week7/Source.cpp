#pragma once
#include <iostream>
#include <string>
#include "gradebook.h"

using namespace std;

int main() {
    string nameOfCourse; // 用來儲存課程名稱的字串
    GradeBook myGradeBook("Computer Networks"); // 建立 GradeBook 物件並指定初始課程名稱
    int pass = 1234; // 密碼（目前未使用）

    // 顯示初始課程名稱
    cout << "Initial course name is: " << myGradeBook.getCourseName() << endl;

    // 提示使用者輸入課程名稱
    cout << "\nPlease enter the course name:" << endl;
    getline(cin, nameOfCourse); // 讀入包含空白的課程名稱
    myGradeBook.setCourseName(nameOfCourse); // 設定新的課程名稱

    cout << endl; // 輸出空白行
    myGradeBook.displayMessage(); // 顯示新課程名稱訊息

    return 0; // 結束程式
}
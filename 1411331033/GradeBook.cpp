#pragma once
#include <iostream>
#include <string>
#include "GradeBook.h"
using namespace std;

GradeBook::GradeBook(string name, int newage)
{
    courseName = name;
    age = newage;
}
void GradeBook::setCourseName(string name)
{
    if (name.size() <= 10)
        courseName = name;
    else if (name.size() > 10)
    {
        courseName = name.substr(0, 10);
        cout << "名稱" << courseName << "超出最大長度(10)\n" << "將 Name 限制前10個。\n" << endl;
    }
}
void GradeBook::setage(int newage)
{
    while (newage < 0 || newage >= 20)
    {
        cout << "錯誤，寵物年紀無法超過20或小於1，請重新設定" << endl;
        cout << "請輸入新的寵物年齡:";
        cin >> newage;
    }
    age = newage;
}

string GradeBook::getCourseName() const
{
    return courseName;
}

int GradeBook::getage() const
{
    return age;
}

void GradeBook::displayMessage() const
{

    cout << "新的寵物名稱為:" << getCourseName() << endl;
    cout << "新的寵物年齡為:" << getage() << endl;
}
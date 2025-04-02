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
        cout << "�W��" << courseName << "�W�X�̤j����(10)\n" << "�N Name ����e10�ӡC\n" << endl;
    }
}
void GradeBook::setage(int newage)
{
    while (newage < 0 || newage >= 20)
    {
        cout << "���~�A�d���~���L�k�W�L20�Τp��1�A�Э��s�]�w" << endl;
        cout << "�п�J�s���d���~��:";
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

    cout << "�s���d���W�٬�:" << getCourseName() << endl;
    cout << "�s���d���~�֬�:" << getage() << endl;
}
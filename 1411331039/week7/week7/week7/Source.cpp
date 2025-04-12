#pragma once
#include <iostream>
#include <string>
#include "gradebook.h"

using namespace std;

int main() {
    string nameOfCourse; // �Ψ��x�s�ҵ{�W�٪��r��
    GradeBook myGradeBook("Computer Networks"); // �إ� GradeBook ����ë��w��l�ҵ{�W��
    int pass = 1234; // �K�X�]�ثe���ϥΡ^

    // ��ܪ�l�ҵ{�W��
    cout << "Initial course name is: " << myGradeBook.getCourseName() << endl;

    // ���ܨϥΪ̿�J�ҵ{�W��
    cout << "\nPlease enter the course name:" << endl;
    getline(cin, nameOfCourse); // Ū�J�]�t�ťժ��ҵ{�W��
    myGradeBook.setCourseName(nameOfCourse); // �]�w�s���ҵ{�W��

    cout << endl; // ��X�ťզ�
    myGradeBook.displayMessage(); // ��ܷs�ҵ{�W�ٰT��

    return 0; // �����{��
}
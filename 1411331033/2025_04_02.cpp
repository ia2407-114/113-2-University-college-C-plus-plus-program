#include <iostream>
#include <string>
#include "GradeBook.h"
using namespace std;

int main()
{
    string nameOfCourse;
    int age;
    GradeBook myGradeBook("dog", 10);
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
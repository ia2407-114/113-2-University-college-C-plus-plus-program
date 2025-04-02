#include <iostream>
#include <string>
#include"dog.h"
using namespace std;
Dog::Dog(string name, int age) {
    dogName = name;
    dogAge = age;
}
void Dog::setdogdata(string name, int age) {
    dogName = name;
    dogAge = age;
    if (age >= 0 and age < 20) {  // 檢查年齡是否小於20
        dogAge = age;
    }
    else {
        cout << "錯誤：狗的年齡必須小於 20 歲。" << endl;
    }
}
string Dog::getName() const 
{
     return dogName;
 }
int Dog::getAge() const {
    return dogAge;
}
void Dog::display() const {
    cout << "狗的年齡:" << dogAge << endl;
    cout << "狗的姓名:" << dogName << endl;
}
void Dog::setCourseName(string name)
{
    if (name.size() <= 10) // if name has 25 or fewer characters
        dogName = name; // store the course name in the object

    if (name.size() > 10) // if name has more than 25 characters
    {
        // set courseName to first 25 characters of parameter name
        dogName = name.substr(0, 10); // start at 0, length of 25

        cerr << "Name \"" << name << "\" 超過10個字元\n"
            << "取用前10個字元.\n" << endl;
    } // end if
} // end function setCourseName

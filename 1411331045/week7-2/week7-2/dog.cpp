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

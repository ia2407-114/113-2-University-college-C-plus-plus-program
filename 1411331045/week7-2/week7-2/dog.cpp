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
    if (age >= 0 and age < 20) {  // �ˬd�~�֬O�_�p��20
        dogAge = age;
    }
    else {
        cout << "���~�G�����~�֥����p�� 20 ���C" << endl;
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
    cout << "�����~��:" << dogAge << endl;
    cout << "�����m�W:" << dogName << endl;
}

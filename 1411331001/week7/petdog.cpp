#include <iostream>
#include <string> // �ϥ� C++ �зǦr�Ŧ���
#include "petdog.h"
using namespace std;

PetDog::PetDog(string name, int age) {
    dogName = name;
    setAge(age); // �ϥ� setAge ��ƨӪ�l�Ʀ~��
}

void PetDog::setDogName(string name) {
    dogName = name; // �x�s�����W�r
}

string PetDog::getDogName() const {
    return dogName; // ��^�����W�r
}

void PetDog::setAge(int age) {
    if (age >= 0 && age <= 20) {
        dogAge = age; // �~�֦X�z�A�]�w�~��
    }
    else {
        cout << "Age is not valid. Age must be between 0 and 20." << endl;
        dogAge = -1; // �o��ܵL�Ī��~��
    }
}

int PetDog::getAge() const {
    return dogAge;
}

void PetDog::displayMessage() const {
    if (dogAge != -1) { // �u�b�~�֦��Į����
        cout << "Dog's Name: " << getDogName() << endl;
        cout << "Dog's Age: " << getAge() << " years old" << endl;
    }
    else {
        cout << "Invalid age for the dog!" << endl;
    }
}
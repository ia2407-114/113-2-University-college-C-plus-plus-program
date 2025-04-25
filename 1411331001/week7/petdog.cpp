#include <iostream>
#include <string> // 使用 C++ 標準字符串類
#include "petdog.h"
using namespace std;

PetDog::PetDog(string name, int age) {
    dogName = name;
    setAge(age); // 使用 setAge 函數來初始化年齡
}

void PetDog::setDogName(string name) {
    dogName = name; // 儲存狗的名字
}

string PetDog::getDogName() const {
    return dogName; // 返回狗的名字
}

void PetDog::setAge(int age) {
    if (age >= 0 && age <= 20) {
        dogAge = age; // 年齡合理，設定年齡
    }
    else {
        cout << "Age is not valid. Age must be between 0 and 20." << endl;
        dogAge = -1; // 這表示無效的年齡
    }
}

int PetDog::getAge() const {
    return dogAge;
}

void PetDog::displayMessage() const {
    if (dogAge != -1) { // 只在年齡有效時顯示
        cout << "Dog's Name: " << getDogName() << endl;
        cout << "Dog's Age: " << getAge() << " years old" << endl;
    }
    else {
        cout << "Invalid age for the dog!" << endl;
    }
}
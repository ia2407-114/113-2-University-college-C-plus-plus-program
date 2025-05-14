#include <iostream>
#include "Pet.h"
#include "Date.h"
using namespace std;

Pet::Pet() {}

Pet::~Pet() {
    cout << "Pet object destructor >> "
        << "名字: " << Name << ", 種類: " << classes << ", ";
    cout << "生日: ";
    birthDate.print();
    cout << ", 領養日: ";
    takeDate.print();
    cout << endl;
}

// 支援瀑布式呼叫，使用 this 指標
Pet& Pet::setClass(const string& cls) {
    this->classes = cls;
    return *this;
}

Pet& Pet::setName(const string& name) {
    this->Name = name;
    return *this;
}

Pet& Pet::setBirthDate(const Date& birth) {
    this->birthDate = birth;
    return *this;
}

Pet& Pet::setTakeDate(const Date& take) {
    this->takeDate = take;
    return *this;
}

void Pet::print() const {
    cout << "寵物名字: " << Name
        << ", 種類: " << classes
        << ", 生日: ";
    birthDate.print();
    cout << ", 領養日: ";
    takeDate.print();
    cout << endl;
}

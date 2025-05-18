#include <iostream>
#include "Pet.h" // 引入員工類別定義
#include "Date.h" // 引入日期類別定義
using namespace std;

Pet::Pet(const string& first, const string& last,
    const Date& dateOfBirth, const Date& dateOfAdopt)
    : firstName(first), lastName(last), birthDate(dateOfBirth), adoptDate(dateOfAdopt) {
    // 呼叫 constructor 時初始化資料
    cout << "Pet object constructor: " << firstName << ' ' << lastName << endl;
}

Pet& Pet::setName(const string& first, const string& last) {
    this->firstName = first;
    this->lastName = last;
    return *this;  // 返回當前對象，支持瀑布式調用
}

Pet& Pet::setBirthDate(int month, int day, int year) {
    this->birthDate.setDate(month, day, year);
    return *this;  // 返回當前對象，支持瀑布式調用
}

Pet& Pet::setAdoptDate(int month, int day, int year) {
    this->adoptDate.setDate(month, day, year);
    return *this;  // 返回當前對象，支持瀑布式調用
}

void Pet::print() const {
    cout << "Pet Name: " << firstName << " " << lastName << endl;
    cout << "Adopt Date: ";
    adoptDate.print();
    cout << endl;
    cout << "Birthday: ";
    birthDate.print();
    cout << endl;
}

Pet::~Pet() {
    cout << "Pet object destructor: " << firstName << ' ' << lastName << endl;
}

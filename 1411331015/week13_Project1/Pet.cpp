// Pet.cpp
#include <iostream>
#include "Pet.h"
using namespace std;

Pet::Pet(const string& t, const string& n, const Date& b, const Date& a)
    : type(t), name(n), birthDate(b), adoptDate(a) {}

bool Pet::isAgeValid() const {
    // Assume dog age is valid if between 0 and 20 years
    int age = 2025 - birthDate.getYear(); // Assume current year is 2025
    return age >= 0 && age <= 20;
}

void Pet::print() const {
    cout << "種類: " << type
        << "，名字: " << name << endl;
    cout << "  生日: "; birthDate.printStandard(); cout << endl;
    cout << "  領養日: "; adoptDate.printStandard(); cout << endl;

    // Check if the pet's birth date is before the adoption date
    if (birthDate.isBefore(adoptDate)) {
        cout << "  驗證結果: 生日正確，領養日大於生日。" << endl;
    }
    else {
        cout << "  驗證結果: 領養日應該大於生日。" << endl;
    }

    // Check if the pet's age is valid
    if (isAgeValid()) {
        cout << "  年齡範圍合理。" << endl;
    }
    else {
        cout << "  年齡不合理。" << endl;
    }
}

Pet::~Pet() {
    cout << "[解構子] 寵物資料 -> ";
    print();
}
// Pet.cpp
#include "Pet.h"
#include <iostream>
#include <stdexcept>
using namespace std;

Pet::Pet(const string& sp, const string& nm, const Date& b, const Date& a)
    : species(sp), name(nm), birthDate(b), adoptionDate(a) {
    validateDates();
}

void Pet::validateDates() const {
    if (!(birthDate <= adoptionDate))
        throw invalid_argument("Error: 生日不可晚於領養日");
    int age = adoptionDate.getYear() - birthDate.getYear();
    if (adoptionDate.getMonth() < birthDate.getMonth() ||
        (adoptionDate.getMonth() == birthDate.getMonth() && adoptionDate.getDay() < birthDate.getDay()))
        age--;
    if (age < 0 || age > 20)
        throw invalid_argument("Error: 寵物年齡需在0~20歲之間");
}

Pet::~Pet() {
    cout << "---- 寵物資料 ----" << endl;
    cout << "種類: " << species << endl;
    cout << "名字: " << name << endl;
    cout << "生日: "; birthDate.print(); cout << endl;
    cout << "領養日: "; adoptionDate.print(); cout << endl;
    int age = adoptionDate.getYear() - birthDate.getYear();
    if (adoptionDate.getMonth() < birthDate.getMonth() ||
        (adoptionDate.getMonth() == birthDate.getMonth() && adoptionDate.getDay() < birthDate.getDay()))
        age--;
    cout << "當時年齡: " << age << " 歲" << endl << endl;
}
#include "Pet.h"
#include <iostream>
#include <stdexcept>
using namespace std;

Pet::Pet(const string& type_,
    const string& name_,
    const Date& birthday,
    const Date& adoptDate_)
    : type(type_), name(name_),
    birthDate(birthday),
    adoptDate(adoptDate_)
{
    validateAgeAndDates();  // 建構時檢查領養日與年齡
    cout << "Pet object constructor: "
        << type << ' ' << name << endl;
}

void Pet::validateAgeAndDates() const
{
    // 檢查領養日是否早於生日
    if (adoptDate.getYear() < birthDate.getYear() ||
        (adoptDate.getYear() == birthDate.getYear() &&
            (adoptDate.getMonth() < birthDate.getMonth() ||
                (adoptDate.getMonth() == birthDate.getMonth() &&
                    adoptDate.getDay() < birthDate.getDay()))))
    {
        throw invalid_argument("領養日不可早於生日");
    }

    // 計算年齡
    int age = adoptDate.getYear() - birthDate.getYear();
    if (adoptDate.getMonth() < birthDate.getMonth() ||
        (adoptDate.getMonth() == birthDate.getMonth() &&
            adoptDate.getDay() < birthDate.getDay()))
        --age;

    if (age < 0 || age > 20)
        throw invalid_argument("寵物年齡須介於 0~20 歲");
}

void Pet::print() const
{
    // 輸出寵物的資料
    cout << "[" << type << "] " << name
        << "  Adopt: ";    adoptDate.print();
    cout << "  Birthday: "; birthDate.print();
    cout << endl;
}

Pet::~Pet()
{
    cout << "Destroying Pet: ";
    print();  // 解構時印出資料
    cout << "------------------------" << endl;
}
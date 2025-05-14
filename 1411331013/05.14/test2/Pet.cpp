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
    validateAgeAndDates();
    cout << "Pet object constructor: "
        << type << ' ' << name << endl;
}

void Pet::validateAgeAndDates() const
{
    if (adoptDate.getYear() < birthDate.getYear() ||
        (adoptDate.getYear() == birthDate.getYear() &&
            (adoptDate.getMonth() < birthDate.getMonth() ||
                (adoptDate.getMonth() == birthDate.getMonth() &&
                    adoptDate.getDay() < birthDate.getDay()))))
    {
        throw invalid_argument("領養日不可早於生日");
    }

    int age = adoptDate.getYear() - birthDate.getYear();
    if (adoptDate.getMonth() < birthDate.getMonth() ||
        (adoptDate.getMonth() == birthDate.getMonth() &&
            adoptDate.getDay() < birthDate.getDay()))
        --age;

    if (age < 0 || age > 20)
        throw invalid_argument("寵物年齡須介於 0~20 歲");
}

Pet* Pet::printAge() const
{
    int age = adoptDate.getYear() - birthDate.getYear();
    if (adoptDate.getMonth() < birthDate.getMonth() ||
        (adoptDate.getMonth() == birthDate.getMonth() &&
            adoptDate.getDay() < birthDate.getDay()))
        --age;

    cout << " 年齡: " << age << " 歲";
    return this;  // 返回 this 指標，實現瀑布式函數呼叫
}

Pet* Pet::print() const
{
    cout << "[" << type << "] " << name
        << "  Adopt: ";    adoptDate.print();
    cout << "  Birthday: "; birthDate.print();
    return this;  // 返回 this 指標，實現瀑布式函數呼叫
}

Pet::~Pet()
{
    cout << "Destroying Pet: ";
    print();  // 使用瀑布式呼叫
    cout << "------------------------" << endl;
}
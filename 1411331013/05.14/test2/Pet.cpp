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
        throw invalid_argument("��i�餣�i����ͤ�");
    }

    int age = adoptDate.getYear() - birthDate.getYear();
    if (adoptDate.getMonth() < birthDate.getMonth() ||
        (adoptDate.getMonth() == birthDate.getMonth() &&
            adoptDate.getDay() < birthDate.getDay()))
        --age;

    if (age < 0 || age > 20)
        throw invalid_argument("�d���~�ֶ����� 0~20 ��");
}

Pet* Pet::printAge() const
{
    int age = adoptDate.getYear() - birthDate.getYear();
    if (adoptDate.getMonth() < birthDate.getMonth() ||
        (adoptDate.getMonth() == birthDate.getMonth() &&
            adoptDate.getDay() < birthDate.getDay()))
        --age;

    cout << " �~��: " << age << " ��";
    return this;  // ��^ this ���СA��{�r������ƩI�s
}

Pet* Pet::print() const
{
    cout << "[" << type << "] " << name
        << "  Adopt: ";    adoptDate.print();
    cout << "  Birthday: "; birthDate.print();
    return this;  // ��^ this ���СA��{�r������ƩI�s
}

Pet::~Pet()
{
    cout << "Destroying Pet: ";
    print();  // �ϥ��r�����I�s
    cout << "------------------------" << endl;
}
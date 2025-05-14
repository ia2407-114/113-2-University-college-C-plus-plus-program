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
    validateAgeAndDates();  // �غc���ˬd��i��P�~��
    cout << "Pet object constructor: "
        << type << ' ' << name << endl;
}

void Pet::validateAgeAndDates() const
{
    // �ˬd��i��O�_����ͤ�
    if (adoptDate.getYear() < birthDate.getYear() ||
        (adoptDate.getYear() == birthDate.getYear() &&
            (adoptDate.getMonth() < birthDate.getMonth() ||
                (adoptDate.getMonth() == birthDate.getMonth() &&
                    adoptDate.getDay() < birthDate.getDay()))))
    {
        throw invalid_argument("��i�餣�i����ͤ�");
    }

    // �p��~��
    int age = adoptDate.getYear() - birthDate.getYear();
    if (adoptDate.getMonth() < birthDate.getMonth() ||
        (adoptDate.getMonth() == birthDate.getMonth() &&
            adoptDate.getDay() < birthDate.getDay()))
        --age;

    if (age < 0 || age > 20)
        throw invalid_argument("�d���~�ֶ����� 0~20 ��");
}

void Pet::print() const
{
    // ��X�d�������
    cout << "[" << type << "] " << name
        << "  Adopt: ";    adoptDate.print();
    cout << "  Birthday: "; birthDate.print();
    cout << endl;
}

Pet::~Pet()
{
    cout << "Destroying Pet: ";
    print();  // �Ѻc�ɦL�X���
    cout << "------------------------" << endl;
}
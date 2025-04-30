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
        throw invalid_argument("Error: �ͤ餣�i�ߩ��i��");
    int age = adoptionDate.getYear() - birthDate.getYear();
    if (adoptionDate.getMonth() < birthDate.getMonth() ||
        (adoptionDate.getMonth() == birthDate.getMonth() && adoptionDate.getDay() < birthDate.getDay()))
        age--;
    if (age < 0 || age > 20)
        throw invalid_argument("Error: �d���~�ֻݦb0~20������");
}

Pet::~Pet() {
    cout << "---- �d����� ----" << endl;
    cout << "����: " << species << endl;
    cout << "�W�r: " << name << endl;
    cout << "�ͤ�: "; birthDate.print(); cout << endl;
    cout << "��i��: "; adoptionDate.print(); cout << endl;
    int age = adoptionDate.getYear() - birthDate.getYear();
    if (adoptionDate.getMonth() < birthDate.getMonth() ||
        (adoptionDate.getMonth() == birthDate.getMonth() && adoptionDate.getDay() < birthDate.getDay()))
        age--;
    cout << "��ɦ~��: " << age << " ��" << endl << endl;
}
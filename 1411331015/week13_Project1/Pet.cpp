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
    cout << "����: " << type
        << "�A�W�r: " << name << endl;
    cout << "  �ͤ�: "; birthDate.printStandard(); cout << endl;
    cout << "  ��i��: "; adoptDate.printStandard(); cout << endl;

    // Check if the pet's birth date is before the adoption date
    if (birthDate.isBefore(adoptDate)) {
        cout << "  ���ҵ��G: �ͤ饿�T�A��i��j��ͤ�C" << endl;
    }
    else {
        cout << "  ���ҵ��G: ��i�����Ӥj��ͤ�C" << endl;
    }

    // Check if the pet's age is valid
    if (isAgeValid()) {
        cout << "  �~�ֽd��X�z�C" << endl;
    }
    else {
        cout << "  �~�֤��X�z�C" << endl;
    }
}

Pet::~Pet() {
    cout << "[�Ѻc�l] �d����� -> ";
    print();
}
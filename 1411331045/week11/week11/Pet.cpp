// Fig. 9.20: Pet.cpp
// Pet class member-function definitions.
#include "Pet.h"
#include "Date.h"
#include <iostream>
using namespace std;

Pet::Pet(string t, string n, Date bDate, Date aDate)
    : type(t), name(n), birthDate(bDate), adoptionDate(aDate) {}

Pet::~Pet() {
    cout << "�d�� " << name << " ����Ƥw�g�Q�R���C" << endl;
    cout << "�d������: " << type << endl;
    cout << "�W�r: " << name << endl;
    cout << "�ͤ�: ";
    birthDate.printDate();
    cout << endl;
    cout << "��i��: ";
    adoptionDate.printDate();
    cout << endl;
}

void Pet::printPetDetails() const {
    cout << "�d������: " << type << endl;
    cout << "�W�r: " << name << endl;
    cout << "�ͤ�: ";
    birthDate.printDate();
    cout << endl;
    cout << "��i��: ";
    adoptionDate.printDate();
    cout << endl;
}

bool Pet::checkPetDetails() const {
    // �ˬd�d���~�֬O�_�X�z
    int age = birthDate.calculateAge(2025, 4, 30);  // ���]��e�~����2025�~
    if (age < 0 || age > 20) {
        cout << "���~: �d�����~�֤��X�z�C" << endl;
        return false;
    }

    // �ˬd�ͤ餣�j���i��
    if (birthDate.calculateAge(adoptionDate) < 0) {
        cout << "���~: �ͤ餣�i�ߩ��i��C" << endl;
        return false;
    }

    return true;
}
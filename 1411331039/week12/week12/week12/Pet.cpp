#include <iostream>
#include "Pet.h"
#include "Date.h"
using namespace std;

Pet::Pet() {}

Pet::~Pet() {
    cout << "Pet object destructor >> "
        << "�W�r: " << Name << ", ����: " << classes << ", ";
    cout << "�ͤ�: ";
    birthDate.print();
    cout << ", ��i��: ";
    takeDate.print();
    cout << endl;
}

// �䴩�r�����I�s�A�ϥ� this ����
Pet& Pet::setClass(const string& cls) {
    this->classes = cls;
    return *this;
}

Pet& Pet::setName(const string& name) {
    this->Name = name;
    return *this;
}

Pet& Pet::setBirthDate(const Date& birth) {
    this->birthDate = birth;
    return *this;
}

Pet& Pet::setTakeDate(const Date& take) {
    this->takeDate = take;
    return *this;
}

void Pet::print() const {
    cout << "�d���W�r: " << Name
        << ", ����: " << classes
        << ", �ͤ�: ";
    birthDate.print();
    cout << ", ��i��: ";
    takeDate.print();
    cout << endl;
}

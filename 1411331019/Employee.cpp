#include "Employee.h"
#include <iostream>
using namespace std;

Employee::Employee(const string& first, const string& last,
    const Date& dateOfBirth, const Date& dateOfHire)
    : firstName(first), lastName(last), birthDate(dateOfBirth), hireDate(dateOfHire)
{
    cout << "[Employee constructor] " << firstName << ' ' << lastName << endl;
}

Employee& Employee::setFirstName(const string& fn) {
    this->firstName = fn;
    return *this;
}

Employee& Employee::setLastName(const string& ln) {
    this->lastName = ln;
    return *this;
}

Employee& Employee::setBirthDate(int m, int d, int y) {
    this->birthDate.setMonth(m).setDay(d).setYear(y);
    return *this;
}

Employee& Employee::setHireDate(int m, int d, int y) {
    this->hireDate.setMonth(m).setDay(d).setYear(y);
    return *this;
}

void Employee::print() const {
    cout << "\n--- ��J�d�� ---\n";
    cout << "Name: " << firstName << " " << lastName << "\n";
    cout << "�ͤ�: "; hireDate.print(); cout << "\n";
    cout << "��i��: "; birthDate.print(); cout << "\n";
}

Employee::~Employee() {
    cout << "[�d���m�W] " << lastName << ", " << firstName << endl;
}

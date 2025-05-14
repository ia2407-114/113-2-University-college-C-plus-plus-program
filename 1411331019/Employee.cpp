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
    cout << "\n--- 輸入寵物 ---\n";
    cout << "Name: " << firstName << " " << lastName << "\n";
    cout << "生日: "; hireDate.print(); cout << "\n";
    cout << "領養日: "; birthDate.print(); cout << "\n";
}

Employee::~Employee() {
    cout << "[寵物姓名] " << lastName << ", " << firstName << endl;
}

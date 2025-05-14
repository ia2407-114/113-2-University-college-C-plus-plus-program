#include <iostream>
#include "Employee.h" // Employee class definition
#include "Date.h" // Date class definition
using namespace std;

Employee::Employee(const string& first, const string& last,
    const Date& dateOfBirth, const Date& dateOfHire)
    : firstName(first), lastName(last), birthDate(dateOfBirth), hireDate(dateOfHire)
{
    cout << "Employee object constructor: "
        << this->firstName << ' ' << this->lastName << endl;
}

void Employee::print() const {
    this->printName();
    this->printHireDate();
    this->printBirthDate();
}

void Employee::printName() const {
    cout << this->lastName << ", " << this->firstName;
}

void Employee::printHireDate() const {
    cout << "  Hired: ";
    this->hireDate.print();
}

void Employee::printBirthDate() const {
    cout << "  Birthday: ";
    this->birthDate.print();
    cout << endl;
}

Employee::~Employee() {
    cout << "Employee object destructor: "
        << this->lastName << ", " << this->firstName << endl;
}

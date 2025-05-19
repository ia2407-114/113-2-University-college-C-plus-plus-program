#include <iostream>
#include "Pet.h" // Pet class definition
#include "Date.h" // Date class definition
using namespace std;

Pet::Pet(const string& first, const string& last,
    const Date& dateOfBirth, const Date& dateOfHire)
    : firstName(first), lastName(last), birthDate(dateOfBirth), hireDate(dateOfHire)
{
    cout << "Pet object constructor: "
        << this->firstName << ' ' << this->lastName << endl;
}

void Pet::print() const {
    this->printName();
    this->printHireDate();
    this->printBirthDate();
}

void Pet::printName() const {
    cout << this->lastName << ", " << this->firstName;
}

void Pet::printHireDate() const {
    cout << "  Hired: ";
    this->hireDate.print();
}

void Pet::printBirthDate() const {
    cout << "  Birthday: ";
    this->birthDate.print();
    cout << endl;
}

Pet::~Pet() {
    cout << "Pet object destructor: "
        << this->lastName << ", " << this->firstName << endl;
}
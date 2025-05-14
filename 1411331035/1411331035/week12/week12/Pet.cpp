#include <iostream>
#include "Pet.h" // Pet class definition
#include "Date.h" // Date class definition
using namespace std;

Pet::Pet(const string& sp, const string& nm,
    const Date& dateOfBirth, const Date& dateOfAdoption)
    : species(sp), name(nm), birthDate(dateOfBirth), adoptDate(dateOfAdoption)
{
    cout << "Pet object constructor: "
        << this->name << " the " << this->species << endl;
}

void Pet::print() const {
    this->printName();
    this->printAdoptDate();
    this->printBirthDate();
}

void Pet::printName() const {
    cout << this->name << " the " << this->species;
}

void Pet::printAdoptDate() const {
    cout << "  Adopted: ";
    this->adoptDate.print();
}

void Pet::printBirthDate() const {
    cout << "  Birthdate: ";
    this->birthDate.print();
    cout << endl;
}

Pet::~Pet() {
    cout << "Pet object destructor: "
        << this->name << " the " << this->species << endl;
}

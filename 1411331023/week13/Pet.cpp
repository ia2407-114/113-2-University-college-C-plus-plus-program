#include <iostream>
#include "Pet.h"
#include "Date.h"
using namespace std;

Pet::Pet(const string& first, const string& last, const Date& dateOfBirth, const Date& dateOfAdopt)
	: firstName(first), lastName(last), birthDate(dateOfBirth), adoptDate(dateOfAdopt) {
	cout << "Pet object constructor: " << this->firstName << ' ' << this->lastName << endl;
}

Pet& Pet::printFirstName() {
	cout << "First name: " << this->firstName << endl;
	return *this;
}

Pet& Pet::printLastName() {
	cout << "Last name: " << this->lastName << endl;
	return *this;
}

Pet& Pet::printDates() {
	cout << "Adoption Date: ";
	this->adoptDate.print();
	cout << ", Birth Date: ";
	this->birthDate.print();
	cout << endl;
	return *this;
}

void Pet::print() const {
	cout << lastName << ", " << firstName << "  Adopted: ";
	adoptDate.print();
	cout << "  Birthday: ";
	birthDate.print();
	cout << endl;
}

Pet::~Pet() {
	cout << "Pet object destructor: " << this->lastName << ", " << this->firstName << endl;
}


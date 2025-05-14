#include <iostream>
#include <stdexcept>
#include "Pet.h"
using namespace std;

Pet::Pet(const string& t, const string& n, const Date& bday, const Date& adopt)
    : type(t), name(n), birthday(bday), adoptionDate(adopt) {
    cout << "Pet object constructor: " << type << " named " << name << endl;
    validateAge();
}

void Pet::validateAge() const {
    int age = adoptionDate.getYear() - birthday.getYear();

    if ((adoptionDate.getMonth() < birthday.getMonth()) ||
        (adoptionDate.getMonth() == birthday.getMonth() &&
            adoptionDate.getDay() < birthday.getDay()))
        age--;

    if (age < 0 || age > 20)
        throw invalid_argument("Pet age must be between 0 and 20 years at adoption.");
}

Pet::~Pet() {
    cout << "\nPet object destructor called:\n";
    cout << "Type: " << type << ", Name: " << name << endl;
    cout << "Birthday: ";
    birthday.print();
    cout << "\nAdoption Date: ";
    adoptionDate.print();
    cout << endl;
}

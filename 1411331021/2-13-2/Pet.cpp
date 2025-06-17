#include <iostream>
#include "Pet.h" // Pet class definition
#include "Date.h" // Date class definition
using namespace std;

Pet::Pet(const string& species, const string& name, const Date& birth, const Date& adoption)
    : species(species), name(name), birthDate(birth), adoptionDate(adoption) {
    cout << "Pet object constructor: " << name << " the " << species << endl;
}

Pet* Pet::setSpecies(const string& species) {
    this->species = species;  // Using 'this' pointer to set species
    return this; // Return 'this' pointer for cascading
}

Pet* Pet::setName(const string& name) {
    this->name = name; // Using 'this' pointer to set name
    return this; // Return 'this' pointer for cascading
}

Pet* Pet::setBirthDate(const Date& birthDate) {
    this->birthDate = birthDate; // Using 'this' pointer to set birth date
    return this; // Return 'this' pointer for cascading
}

Pet* Pet::setAdoptionDate(const Date& adoptionDate) {
    this->adoptionDate = adoptionDate; // Using 'this' pointer to set adoption date
    return this; // Return 'this' pointer for cascading
}

void Pet::print() const {
    cout << "Pet Name: " << name << ", Species: " << species << endl;
    cout << "Birth Date: ";
    birthDate.print();
    cout << ", Adoption Date: ";
    adoptionDate.print();
    cout << endl;
}

Pet::~Pet() {
    cout << "Pet object destructor: " << name << " the " << species << endl;
}

bool Pet::checkAge() const {
    // Calculate the age based on the birth and adoption dates
    int age = adoptionDate.getYear() - birthDate.getYear();
    if (adoptionDate.getMonth() < birthDate.getMonth() ||
        (adoptionDate.getMonth() == birthDate.getMonth() && adoptionDate.getDay() < birthDate.getDay())) {
        age--; // Adjust age if adoption date is before birthday in the year
    }
    // Check if the pet's age is between 0 and 20 years
    return (age >= 0 && age <= 20);
}

bool Pet::checkAdoptionDate() const {
    // Check if the birth date is not later than the adoption date
    if (birthDate.getYear() > adoptionDate.getYear()) return false;
    if (birthDate.getYear() == adoptionDate.getYear()) {
        if (birthDate.getMonth() > adoptionDate.getMonth()) return false;
        if (birthDate.getMonth() == adoptionDate.getMonth() && birthDate.getDay() > adoptionDate.getDay()) return false;
    }
    return true;
}

#include <iostream>
#include "week13-1 Pet.h"
using namespace std;

Pet::Pet(const string& petType, const string& petName, const Date& bDate, const Date& aDate)
    : type(petType), name(petName), birthDate(bDate), adoptDate(aDate)
{
    cout << "Pet object constructor: " << type << " named " << name << endl;
}

bool Pet::isValid() const
{
    int age = adoptDate.getYear() - birthDate.getYear();
    if (age < 0 || age > 20) {
        cout << "Invalid age for " << name << endl;
        return false;
    }
    return true;
}

Pet::~Pet()
{
    cout << "Pet object destructor:\n"
        << "Type: " << type << "\n"
        << "Name: " << name << "\n"
        << "Birthday: ";
    birthDate.print();
    cout << "\nAdopted on: ";
    adoptDate.print();
    cout << "\n---------------------" << endl;
}
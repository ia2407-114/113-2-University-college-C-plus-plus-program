// Fig. 9.20: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
#include "Employee.h" // Employee class definition
#include "Date.h" // Date class definition
using namespace std;

// constructor uses member initializer list to pass initializer 
// values to constructors of member objects  
Pet::Pet(const string& type, const string& name,
    const Date& dateOfBirth, const Date& dateOfAdoption)
    : Dogtype(type), // initialize firstName
    Dogname(name), // initialize lastName
    birthDate(dateOfBirth), // initialize birthDate
    AdoptionDate(dateOfAdoption) // initialize hireDate
{
    // output Employee object to show when constructor is called
    cout << "Dog imformation: "
        << Dogtype << ',' << Dogname << endl;
} // end Employee constructor

// print Employee object
void Pet::print() const
{
    cout << Dogname << ", " << Dogtype << "  Adoptioned: ";
    AdoptionDate.print();
    cout << "  Birthday: ";
    birthDate.print();
    cout << endl;
} // end function print

// output Employee object to show when its destructor is called
Pet::~Pet()
{
    cout << "Dog information: "
        << Dogname << ", " << Dogtype << endl;
} // end ~Employee destructor



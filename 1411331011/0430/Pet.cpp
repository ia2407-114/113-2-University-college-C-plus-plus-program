// Fig. 9.20: Pet.cpp
// Pet class member-function definitions.
#include <iostream>
#include "Pet.h" // Pet class definition
#include "Date.h" // Date class definition
using namespace std;

// constructor uses member initializer list to pass initializer
// values to constructors of member objects  
Pet::Pet(const string& first, const string& last,
    const Date& dateOfBirth, const Date& dateOfAdopt)
    : firstName(first), // initialize firstName
    lastName(last), // initialize lastName
    birthDate(dateOfBirth), // initialize birthDate
    adoptDate(dateOfAdopt) // initialize hireDate
{
    // output Pet object to show when constructor is called
    cout << "Pet object constructor: "
        << firstName << ' ' << lastName << endl;
} // end Pet constructor

// print Pet object
void Pet::print() const
{
    cout << lastName << ", " << firstName << "  Adopt: ";
    adoptDate.print();
    cout << "  Birthday: ";
    birthDate.print();
    cout << endl;
} // end function print

// output Pet object to show when its destructor is called
Pet::~Pet()
{
    cout << "Pet object destructor: "
        << lastName << ", " << firstName << endl;
} // end ~Pet destructor

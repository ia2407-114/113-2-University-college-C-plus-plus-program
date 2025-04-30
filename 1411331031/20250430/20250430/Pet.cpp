// Fig. 9.20: Pet.cpp
// Pet class member-function definitions.
#include <iostream>
#include "Pet.h" // Pet class definition
#include "Date.h" // Date class definition
using namespace std;

// constructor uses member initializer list to pass initializer 
// values to constructors of member objects  
Pet::Pet(const string& first, const string& last,
    const Date& dateOfBirth, const Date& dateOfTake)
    : classes(first), // initialize classes
    Name(last), // initialize lastName
    birthDate(dateOfBirth), // initialize birthDate
    takeDate(dateOfTake) // initialize takeDates
{
    // output Pet object to show when constructor is called
    cout << "�d������: "
        << classes << " �d���W�r:" << Name << endl;
} // end Pet constructor

// print Pet object
void Pet::print() const
{
    cout <<"�d���W�r:"<< Name << " ����:" << classes << "  ��i��: ";
    takeDate.print();
    cout << "  �ͤ�: ";
    birthDate.print();
    cout << endl;
} // end function print

// output Pet object to show when its destructor is called
Pet::~Pet()
{
    cout << "Pet object destructor >> "
        <<" �W�r:"<< Name << " ����:" << classes << endl;
} // end ~Pet destructor
#pragma once
// Fig. 9.19: Employee.h
// Employee class definition showing composition.
// Member functions defined in Employee.cpp.
#ifndef EMPLOYEE_H
#define EMPLOYEE_H
using namespace std;

#include <string>
#include "Date.h" // include Date class definition

class Pet
{
public:
    Pet(const string&, const string&,
        const Date&, const Date&);
    void print() const;
    ~Pet(); // provided to confirm destruction order
private:
    string Dogtype; // composition: member object
    string Dogname; // composition: member object
    const Date birthDate; // composition: member object
    const Date AdoptionDate; // composition: member object
}; // end class Employee

#endif

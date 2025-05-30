#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include "Date.h" // include Date class definition

class Employee
{
public:
    Employee(const std::string&, const std::string&,
        const Date&, const Date&);
    void print() const;
    ~Employee(); // provided to confirm destruction order

private:
    std::string firstName; // composition: member object
    std::string lastName; // composition: member object
    const Date birthDate; // composition: member object
    const Date hireDate; // composition: member object

    void printName() const;
    void printHireDate() const;
    void printBirthDate() const;
};

#endif

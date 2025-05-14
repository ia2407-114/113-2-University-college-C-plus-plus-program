#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include "Date.h" // include Date class definition

class Employee
{
public:
    Employee(const std::string& first, const std::string& last,
        const Date& dateOfBirth, const Date& dateOfHire);
    Employee& setFirstName(const std::string& fn);
    Employee& setLastName(const std::string& ln);
    Employee& setBirthDate(int m, int d, int y);
    Employee& setHireDate(int m, int d, int y);
    void print() const;
    ~Employee(); // destructor to confirm destruction order

private:
    std::string firstName;
    std::string lastName;
    Date birthDate;
    Date hireDate;
};

#endif // EMPLOYEE_H
#pragma once

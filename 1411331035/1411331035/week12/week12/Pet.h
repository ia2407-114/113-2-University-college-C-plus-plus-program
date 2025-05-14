#ifndef PET_H
#define PET_H

#include <string>
#include "Date.h" // include Date class definition

class Pet
{
public:
    Pet(const std::string&, const std::string&,
        const Date&, const Date&);
    void print() const;
    ~Pet(); // provided to confirm destruction order

private:
    std::string species; // composition: member object
    std::string name; // composition: member object
    const Date& birthDate; // reference to Date object
    const Date& adoptDate; // reference to Date object

    void printName() const;
    void printAdoptDate() const;
    void printBirthDate() const;
};

#endif

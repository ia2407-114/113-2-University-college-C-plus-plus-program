// Fig. 9.19: Pet.h
// Pet class definition showing composition.
// Member functions defined in Pet.cpp.
#ifndef Pet_H
#define Pet_H

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
    std::string classes; // composition: member object
    std::string Name; // composition: member object
    const Date birthDate; // composition: member object
    const Date takeDate; // composition: member object
}; // end class Pet

#endif
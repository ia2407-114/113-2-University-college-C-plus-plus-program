// Fig. 9.19: Pet.h
// Pet class definition showing composition.
// Member functions defined in Pet.cpp.
#ifndef PET_H
#define PET_H
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
    string firstName; // composition: member object
    string lastName; // composition: member object
    const Date birthDate; // composition: member object
    const Date adoptDate; // composition: member object
}; // end class Pet

#endif



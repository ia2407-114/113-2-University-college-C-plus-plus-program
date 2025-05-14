#ifndef PET_H
#define PET_H

#include <string>
#include "Date.h"

using namespace std;

class Pet
{
public:
    Pet(const string&, const string&,
        const Date&, const Date&);
    void check();
    ~Pet();
private:
    string firstName;
    string lastName;
    const Date birthDate;
    const Date hireDate;
};
#endif
#ifndef PET_H
#define PET_H

#include <string>
#include "week13-1 Date.h"

class Pet
{
public:
    Pet(const std::string&, const std::string&, const Date&, const Date&);
    bool isValid() const;
    ~Pet();
private:
    std::string type;
    std::string name;
    const Date birthDate;
    const Date adoptDate;
};

#endif
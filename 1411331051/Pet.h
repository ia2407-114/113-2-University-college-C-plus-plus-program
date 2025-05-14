#pragma once
#ifndef PET_H
#define PET_H

#include <string>
#include "Date.h"

class Pet {
public:
    Pet(const std::string&, const std::string&, const Date&, const Date&);
    ~Pet();
private:
    std::string type;
    std::string name;
    const Date birthday;
    const Date adoptionDate;
    void validateAge() const;
};

#endif

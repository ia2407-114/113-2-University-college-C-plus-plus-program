// Pet.h
#pragma once
#ifndef PET_H
#define PET_H

#include <string>
#include "Date.h"

class Pet {
public:
    Pet(const std::string& species, const std::string& name,
        const Date& birth, const Date& adoption);
    ~Pet();

private:
    std::string species;
    std::string name;
    Date birthDate;
    Date adoptionDate;

    void validateDates() const;
};
#endif 
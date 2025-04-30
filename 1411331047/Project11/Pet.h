// Pet.h
#ifndef PET_H
#define PET_H

#include <string>
#include "Date.h"

class Pet {
public:
    // species: ºØÃþ¡Fname: ¦W¦r
    Pet(const std::string& species,
        const std::string& name,
        const Date& birthDate,
        const Date& adoptionDate);

    void print() const;
    ~Pet();

private:
    std::string species;
    std::string name;
    Date birthDate;
    Date adoptionDate;
};

#endif

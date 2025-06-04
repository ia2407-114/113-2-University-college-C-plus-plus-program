#pragma once
// Pet.h
#pragma once
#ifndef PET_H
#define PET_H

#include <string>
#include "Date.h"

class Pet {
public:
    Pet(const std::string& type, const std::string& name,
        const Date& birth, const Date& adopt);
    void print() const;
    bool isAgeValid() const;
    ~Pet();

private:
    std::string type;
    std::string name;
    const Date birthDate;
    const Date adoptDate;
};

#endif // PET_H

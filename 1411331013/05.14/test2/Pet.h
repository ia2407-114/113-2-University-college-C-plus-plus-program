#ifndef PET_H
#define PET_H

#include <string>
#include "Date.h"
using namespace std;

class Pet
{
public:
    Pet(const string& type,
        const string& name,
        const Date& birthday,
        const Date& adoptDate);

    Pet* print() const;
    Pet* printAge() const;
    ~Pet();

private:
    string type;        // 寵物種類
    string name;        // 寵物名字
    const Date birthDate;
    const Date adoptDate;

    void validateAgeAndDates() const;
};

#endif
#pragma once
#ifndef PET20250514_H
#define PET20250514_H

#include <string>
#include "Date20250514.h"

using namespace std;

class Pet
{
public:
    explicit Pet(); //�]���n�r������J �ҥH�غc�l�S�� :)

    Pet& setPet(string, string, Date, Date);
    Pet& setFirst(string);
    Pet& setLast(string);
    Pet& setbirthDate(Date);
    Pet& sethireDate(Date);

    void check();
    ~Pet();
private:
    string firstName;
    string lastName;
    Date birthDate;
    Date hireDate;
};
#endif

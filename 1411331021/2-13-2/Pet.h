#ifndef PET_H
#define PET_H

#include <string>
#include "Date.h" // include Date class definition

class Pet {
public:
    Pet(const std::string&, const std::string&, const Date&, const Date&);
    void print() const;
    ~Pet(); // Destructor to print pet information
    Pet* setSpecies(const std::string& species);  // Set species using 'this' pointer
    Pet* setName(const std::string& name);        // Set name using 'this' pointer
    Pet* setBirthDate(const Date& birthDate);     // Set birth date using 'this' pointer
    Pet* setAdoptionDate(const Date& adoptionDate); // Set adoption date using 'this' pointer
    bool checkAge() const; // Check if pet's age is reasonable (0-20 years)
    bool checkAdoptionDate() const; // Check if birth date is not later than adoption date

private:
    std::string species; // Species of the pet
    std::string name;    // Pet's name
    Date birthDate; // Birth date (removed const)
    Date adoptionDate; // Adoption date (removed const)
};

#endif

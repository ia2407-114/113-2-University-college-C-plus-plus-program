#include <iostream>
#include <string> // program uses C++ standard string class
#include "Petdog.h"
using namespace std;

PetDog::PetDog(string dogName, int dogAge)
{
    setName(dogName);
    setAge(dogAge);
}
void PetDog:: setName(string dogName)
{
    dogname = dogName;
}
string PetDog::getName() const
{
    return dogname;
}
void  PetDog::setCourseName(string name)
{
    if (name.size() <= 10) // if name has 25 or fewer characters
        dogname = name; // store the course name in the object

    if (name.size() > 10) // if name has more than 25 characters
    {
        // set courseName to first 25 characters of parameter name
        dogname = name.substr(0, 10); // start at 0, length of 25

        cerr << "Name \"" << dogname << "\" exceeds maximum length (10).\n"
            << "Limiting courseName to first 10 characters.\n" << endl;
    } // end if
}

void PetDog::setAge(int dogAge)
{
    if (dogAge < 20 && dogAge >= 0)
        age = dogAge;
    else
        cout << "Invalid age! Age must be between 0 and 19." << endl;
}
int PetDog::getAge() const
{
    return age;
}
 void PetDog:: newdisplayDogInfo() const
{
    cout << "new dog's name is: " << getName() << endl;
    cout << "new dog's age is: " << getAge() << " years old." << endl;
}
void PetDog::displayDogInfo() const
{
    cout << "origin dog's name is: " << getName() << endl;
    cout << "origin dog's age is: " << getAge() << " years old." << endl;
}
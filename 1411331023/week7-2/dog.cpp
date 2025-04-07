
#include <iostream>
#include <string> // program uses C++ standard string class
#include "dog.h"
using namespace std;

DOG::DOG(string name, int age)
{
    DogName = name;
    DogAge = age;
}


void DOG::setDogName_and_Age(string name, int age)
{
    if (name.size() <= 10) // if name has 25 or fewer characters
        DogName = name; // store the course name in the object
        DogAge = age;// store the course name in the object

    if (name.size() > 10) // if name has more than 25 characters
    {
        // set courseName to first 25 characters of parameter name
        DogName = name.substr(0, 10); // start at 0, length of 25

        cerr << "Name \"" << name << "\" exceeds maximum length (10).\n"
            << "Limiting courseName to first 10 characters.\n" << endl;
    } // end if
} // end function setCourseName

string DOG::getDogName() const
{
    return DogName; // return the object's courseName
}

int DOG::getDogAge() const
{
    return DogAge; // return the object's courseName
}

void DOG::displayMessage() const
{
    // this statement calls getCourseName to get the 
    // name of the course this GradeBook represents
    cout << "This my dog named %s\n" << getDogName() << "!" << endl;
    cout << "This my dog now is age %d\n" << getDogAge() << "!" << endl;
}

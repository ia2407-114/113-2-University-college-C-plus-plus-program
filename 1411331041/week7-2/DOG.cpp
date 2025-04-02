#include <iostream>
#include <string> // program uses C++ standard string class
#include"DOG.h"
using namespace std;

DOG::DOG(string name, int age)
{
    DogName = name;
    DogAge = age;
}
// function that sets the course name

void DOG::setDogName_and_Age(string name, int age)
{
    if (age < 20)
    {
        DogName = name;
        DogAge = age;
    }
    else
    {
        cout << "too old!" << endl;
    }

    if (name.size() <= 10) // if name has 25 or fewer characters
        DogName = name; // store the course name in the object

    if (name.size() > 10) // if name has more than 25 characters
    {
        // set courseName to first 25 characters of parameter name
        DogName = name.substr(0, 10); // start at 0, length of 25

        cerr << "Name \"" << name << "\" exceeds maximum length (10).\n"
            << "Limiting courseName to first 10 characters.\n" << endl;
    } // end if
} // end function setCourseName

// function that gets the course name

string DOG::getDogName() const
{
    return DogName; // return the object's courseName
} // end function getCourseName

int DOG::getDogAge() const
{
    return DogAge;
}

void DOG::displayMessage() const
{
    // this statement calls getCourseName to get the 
    // name of the course this GradeBook represents
    cout << "This dog's name is \n" << getDogName() << "!" << endl;
    cout << "This dog's age is \n" << getDogAge() << "!" << endl;
} // end function displayMessage


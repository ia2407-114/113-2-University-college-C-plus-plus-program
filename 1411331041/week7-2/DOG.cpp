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
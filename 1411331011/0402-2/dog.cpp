#include <iostream>
#include <string> // program uses C++ standard string class
#include"dog.h"
using namespace std;

// Dog class definition
DOG:: DOG(string name, int age)
    {
        DogName = name;
        DogAge = age;
    }
    // function that sets the course name
void DOG::setDogName_and_Age(string name, int age)
{
    if (name.size() <= 10) // if name has 25 or fewer characters
        DogName = name;
        DogAge = age;

    if (name.size() > 10)
    {
       
        DogName = name.substr(0, 10);

        cerr << "Name \"" << name << "\" exceeds maximum length (10).\n"
            << "Limiting courseName to first 10 characters.\n" << endl;
    } // end if
} // end function setCourseName

 string DOG::getDogName() const
    {
        return DogName; // return the object's courseName
    } // end function getCourseName

 int DOG::getDogAge() const
    {
        return DogAge; // return the object's courseName
    } // end function getCourseName

    // function that displays a welcome message
 void DOG::displayMessage() const
    {
        // this statement calls getCourseName to get the
        // name of the course this GradeBook represents
        cout << "This my dog named %s\n" << getDogName() << "!" << endl;
        cout << "This my dog now is age %d\n" << getDogName() << "!" << endl;
    } // end function displayMessage


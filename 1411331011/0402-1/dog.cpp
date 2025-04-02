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
        if (age < 20)
        {
            DogName = name; // store the course name in the object
            DogAge = age;
        }
        else
            cout << "It's too old!!! Invalid data!" << endl;

    } // end function setCourseName

    // function that gets the course name
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


#include <iostream>
#include <string> 
#include"week7-2.h"
DOG::DOG(string name, int age)
{
        DogName = name;
        DogAge = age;
    }

void DOG::setDogName_and_Age(string name, int age)
 {
    if (age < 20)
    {
        DogName = name;
        DogAge = age;
    }
    else
        cout << "It's too old!!! Invalid data!" << endl;

}

string DOG::getDogName() const
{
    return DogName;
}
int DOG::getDogAge() const
{
    return DogAge;
}

void DOG::displayMessage() const
{
    cout << "This my dog named \n%s" << getDogName() << "!" << endl;
    cout << "This my dog now is age\n %d" << getDogName() << "!" << endl;
}

void DOG::setDogName(string name)
{
    if (name.size() <= 10) // if name has 10 or fewer characters
        DogName = name; // store the course name in the object

    if (name.size() > 10) // if name has more than 10 characters
    {
        // set courseName to first 10 characters of parameter name
        DogName = name.substr(0, 10); // start at 0, length of 10

        cerr << "Name \"" << name << "\" exceeds maximum length (10).\n"
            << "Limiting courseName to first 10 characters.\n" << endl;
    } // end if
} // end function setCourseName
using namespace std;
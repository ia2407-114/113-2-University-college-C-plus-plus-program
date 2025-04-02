#include <iostream>
#include <string> // program uses C++ standard string class
#include"gradebook.h"
using namespace std;

PetDog::PetDog(string dogName, int dogAge) {
    setName(dogName);
    setAge(dogAge);
}

// function that sets the course name
void PetDog::setName(string dogName) {
    name = dogName;
}

string PetDog::getName() const {
    return name;
}
// function that displays a welcome message
void PetDog::setAge(int dogAge) {
    if (dogAge < 20 && dogAge >= 0)
        age = dogAge;
    else
        cout << "Invalid age! Age must be between 0 and 19." << endl;
}

int PetDog::getAge() const{
    return age;
}

void PetDog::newdisplayDogInfo() const {
    cout << "new dog's name is: " << getName() << endl;
    cout << "new dog's age is: " << getAge() << " years old." << endl;
}

void PetDog::displayDogInfo() const {
    cout << "origin dog's name is: " << getName() << endl;
    cout << "origin dog's age is: " << getAge() << " years old." << endl;
}

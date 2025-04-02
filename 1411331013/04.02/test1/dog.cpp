#include <iostream>
#include <string> 
#include "dog.h"
using namespace std;

Dog::Dog(string name, int age)
{
    DogName = name;
    DogAge = age;
}

void Dog::setDogName_and_Age(string name, int age)
{
    if (age < 20) {
        DogName = name;
        DogAge = age;
    }
    else {
        cout << "Invalid data" << endl;
    }
}

string Dog::getDogName() const
{
    return DogName;
}

int Dog::getDogAge() const
{
    return DogAge;
}

void Dog::displayMessage() const
{
    cout << "This is my dog's name:" << getDogName() << "\nand now age is:" << getDogAge() << "!" << endl;
}
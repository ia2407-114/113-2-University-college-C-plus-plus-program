#include <iostream>
#include <string> 
#include "dog1.h"
using namespace std;

Dog::Dog(string name, int age)
{
    DogName = name;
    DogAge = age;
}

void Dog::setDogName_and_Age(string name, int age)
{
    if (name.size() <= 10)
        DogName = name;

    if (name.size() > 10)
    {
        DogName = name.substr(0, 10);
        cerr << "Name\"" << name << "\" exceeds maximum lenth(10).\n" << "Limiting DogName to first 10 characters.\n" << endl;
    }

    if (age < 20) {
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
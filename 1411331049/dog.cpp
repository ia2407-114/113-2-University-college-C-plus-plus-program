#include <iostream>
#include "Dog.h"

using namespace std;

// Constructor to initialize dog's name and age
Dog::Dog(string n, int a) {
    name = n;
    if (a >= 0 && a < 20) {
        age = a;
    }
    else {
        cout << "Age is not valid. Please enter an age between 0 and 19." << endl;
        age = 0;  // Default age is 0 if invalid
    }
}

// Set the dog's name
void Dog::setName(string n) {
    name = n;
}

// Get the dog's name
string Dog::getName() const {
    return name;
}

// Set the dog's age with validation
void Dog::setAge(int a) {
    if (a >= 0 && a < 20) {
        age = a;
    }
    else {
        cout << "Age is not valid. Please enter an age between 0 and 19." << endl;
    }
}

// Get the dog's age
int Dog::getAge() const {
    return age;
}

// Print the dog's information
void Dog::printInfo() const {
    cout << "Pet dog's name: " << name << ", Age: " << age << " years old" << endl;
}

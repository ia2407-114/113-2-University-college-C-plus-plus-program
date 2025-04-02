#include "Dog.h"
#include<iostream>

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

// Setter for the dog's name with validation
void Dog::setName(string n) {
    if (n.size() <= 10) {
        name = n;  // If the name is 10 characters or fewer, store it directly
    }
    else {
        // If the name is longer than 10 characters, truncate it to the first 10 characters
        name = n.substr(0, 10);  // Get the first 10 characters
        cerr << "Name \"" << n << "\" exceeds maximum length (10).\n"
            << "Limiting dog's name to the first 10 characters.\n" << endl;
    }
}

// Getter for the dog's name
string Dog::getName() const {
    return name;
}

// Setter for the dog's age with validation
void Dog::setAge(int a) {
    if (a >= 0 && a < 20) {
        age = a;
    }
    else {
        cout << "Age is not valid. Please enter an age between 0 and 19." << endl;
    }
}

// Getter for the dog's age
int Dog::getAge() const {
    return age;
}

// Print the dog's information
void Dog::printInfo() const {
    cout << "Pet dog's name: " << name << ", Age: " << age << " years old" << endl;
}

#ifndef DOG_H
#define DOG_H

#include <string>
using namespace std;

class Dog {
private:
    string name;
    int age;

public:
    // Constructor to initialize dog's name and age
    Dog(string n, int a);

    // Set the dog's name
    void setName(string n);

    // Get the dog's name
    string getName() const;

    // Set the dog's age with validation
    void setAge(int a);

    // Get the dog's age
    int getAge() const;

    // Print the dog's information
    void printInfo() const;
};

#endif // DOG_H
#pragma once
#pragma once

#pragma once
#include <iostream>
#include <string> // program uses C++ standard string class
using namespace std;


class DOG
{
public:
    explicit  DOG(string name, int age);

    // function that sets the course name
    void setDogName_and_Age(string name, int age);

    // function that gets the course name
    string getDogName() const;

    int getDogAge() const;

    // function that displays a welcome message
    void displayMessage() const;

private:
    string DogName; // course name for this GradeBook
    int DogAge;
}; // end class GradeBook  


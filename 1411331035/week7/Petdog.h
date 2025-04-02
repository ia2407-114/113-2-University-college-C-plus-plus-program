#include <iostream>
#include <string> // program uses C++ standard string class
using namespace std;

class PetDog
{
public:
    // constructor with parameters to initialize dog's name and age
    explicit PetDog(string dogName, int dogAge);
   
    // function to set the dog's name
    void setName(string dogName);
    
    // function to get the dog's name
    string getName() const;
    
    // function to set the dog's age
    void setAge(int dogAge);
    
    void setCourseName(string name);

    // function to get the dog's age
    int getAge() const;
    
    // function to display the dog's information
    void newdisplayDogInfo() const;
   
    void displayDogInfo() const;
    

private:
    string dogname;  // dog's name
    int age;      // dog's age
}; // end class PetDog  #pragma once

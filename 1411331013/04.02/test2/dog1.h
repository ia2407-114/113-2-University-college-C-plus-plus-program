#include <iostream>
#include <string> 
using namespace std;

class Dog
{
public:
    explicit Dog(string name = "Unknow", int age = 0);

    void setDogName_and_Age(string name, int age);

    string getDogName() const;

    int getDogAge() const;

    void displayMessage() const;

private:
    string DogName;
    int DogAge;
};


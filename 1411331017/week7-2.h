#include <iostream>
#include <string> 
using namespace std;

class DOG {
public:
   
    DOG(string name, int age);

    void setDogName_and_Age(string name, int age);

    string getDogName() const;

    int getDogAge() const;

    void displayMessage() const;

    void setDogName(string name);

private:
    string DogName;
    int DogAge;
};


#include <iostream>
#include <string> // program uses C++ standard string class
using namespace std;

// GradeBook class definition
class DOG
{
public:
    explicit  DOG(string name, int age);
    void setDogName_and_Age(string name, int age);
    string getDogName() const;
    int getDogAge() const;
    void displayMessage() const;
private:
    string DogName; // course name for this GradeBook
    int DogAge;
}; // end class GradeBook  

// function main begins program execution

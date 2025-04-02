#include <iostream>
#include <string> // program uses C++ standard string class
using namespace std;

// Dog class definition
class DOG
{
public:
    explicit  DOG(string name, int age);
    
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

// function main begins program execution

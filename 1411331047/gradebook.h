#include <iostream>
#include <string> // program uses C++ standard string class
using namespace std;
// GradeBook class definition
class PetDog
{
public:
    explicit PetDog(string dogName, int dogAge);

        // function that sets the course name
        void setName(string dogName);
        string getName() const;
    // function that displays a welcome message
        void setAge(int dogAge);

        int getAge() const;

        void newdisplayDogInfo() const;

        void displayDogInfo() const;

private:
    string name;  // dog's name
    int age;      // dog's age
}; // end class PetDog  


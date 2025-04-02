#include <iostream>
#include <string> // program uses C++ standard string class
using namespace std;

class DOG
{
public:
    explicit DOG(string name, int age);
    void setDog(string name, int age);
    string getDogName();
    int getDogAge();
    void displayMessage();
private:
    string DogName;
    int DogAge;
};

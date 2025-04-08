#include <iostream>
#include <string> 
#include"week7-1.h"
DOG::DOG(string name, int age)
{
        DogName = name;
        DogAge = age;
    }

void DOG::setDogName_and_Age(string name, int age)
 {
    if (age < 20)
    {
        DogName = name;
        DogAge = age;
    }
    else
        cout << "It's too old!!! Invalid data!" << endl;

}

string DOG::getDogName() const
{
    return DogName;
}
int DOG::getDogAge() const
{
    return DogAge;
}

void DOG::displayMessage() const
{
    cout << "This my dog named \n%s" << getDogName() << "!" << endl;
    cout << "This my dog now is age\n %d" << getDogName() << "!" << endl;
}

using namespace std;
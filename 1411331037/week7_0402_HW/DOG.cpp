#include <iostream>
#include <string> // program uses C++ standard string class
#include "DOG.h"
using namespace std;

DOG::DOG(string name, int age)
    : DogName(name), DogAge(age)
{}

void DOG::setDog(string name, int age)
{
    if (age < 20) {
        DogName = name;
        DogAge = age;
    }

    else
        cout << "�~�֤��i�W�X20��" << endl;

}

string DOG::getDogName()
{
    return DogName;

}
int DOG::getDogAge()
{
    return DogAge;
}

void DOG::displayMessage()
{
    cout << "\n�����W�r�s" << getDogName() << "�A�~�֬� " << getDogAge() << "��!" << endl;
}
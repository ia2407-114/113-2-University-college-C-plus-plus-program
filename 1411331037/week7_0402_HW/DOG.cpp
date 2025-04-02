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
        cout << "年齡不可超出20歲" << endl;

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
    cout << "\n狗的名字叫" << getDogName() << "，年齡為 " << getDogAge() << "歲!" << endl;
}
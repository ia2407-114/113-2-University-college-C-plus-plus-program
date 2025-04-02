#include <iostream>
#include <string> 
#include "dog.h"
using namespace std;

int main()
{
    string nameOfDog;
    int age;
    Dog myDog;
    cout << "Initial dog's name is: " << myDog.getDogName() << endl;
    cout << "\nInitial dog's age is: " << myDog.getDogAge() << endl;

    cout << "\nPlease enter the dog's name and age:" << endl;
    getline(cin, nameOfDog);
    cin >> age;
    myDog.setDogName_and_Age(nameOfDog, age);
    cout << endl;
    myDog.displayMessage();
}

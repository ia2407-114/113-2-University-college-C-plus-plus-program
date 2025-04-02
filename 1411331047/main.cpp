#include <iostream>
#include <string> // program uses C++ standard string class
#include"gradebook.h"
using namespace std;

int main()
{
    string dogName;
    int dogAge;


    // prompt for, input and create a PetDog object with user's input
    //cout << "Please enter the dog's name: ";
    //getline(cin, dogName);  

    //cout << "Please enter the dog's age: ";
    //cin >> dogAge;  


    PetDog myDog("tim", 10);


    myDog.displayDogInfo();


    cout << "\nYou can update the dog's information now!" << endl;


    cout << "Please enter a new name for the dog: " << endl;


    getline(cin, dogName);
    myDog.setName(dogName);

    cout << "Please enter a new age for the dog: " << endl;
    cin >> dogAge;
    myDog.setAge(dogAge);


    myDog.newdisplayDogInfo();

    return 0;
}
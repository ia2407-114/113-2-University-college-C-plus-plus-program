#include <iostream>
#include <string>
#include "Dog.h"

using namespace std;

int main() {
    string name;
    int age;

    // Get user input for dog's name and age
    cout << "Enter the pet dog's name: ";
    cin.ignore(); // Ignore any leftover newline characters
    getline(cin, name);

    cout << "Enter the pet dog's age: ";
    cin >> age;

    // Create the Dog object using the constructor
    Dog myDog(name, age);
    myDog.printInfo();

    // Allow user to modify the dog's attributes
    cout << "\nEnter a new name for your pet dog: ";
    cin.ignore();  // Ignore leftover newline
    getline(cin, name);
    myDog.setName(name);

    cout << "Enter a new age for your pet dog: ";
    cin >> age;
    myDog.setAge(age);

    // Print updated information
    cout << "\nUpdated dog information:" << endl;
    myDog.printInfo();

    return 0;
}

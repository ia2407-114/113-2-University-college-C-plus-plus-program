#include <iostream>
#include <string> 
#include"week7-2.h"
int main() {
    string nameOfDog;
    int age;

    cout << "Please enter the dog's name: ";
    getline(cin, nameOfDog);
    cout << "Please enter the dog's age: ";
    cin >> age;

    DOG myDog(nameOfDog, age);

    cout << endl;
    myDog.displayMessage();

    return 0;
}
using namespace std;
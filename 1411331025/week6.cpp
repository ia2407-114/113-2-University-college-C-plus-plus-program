#include <iostream>
#include <string>
using namespace std;

class Dog {
public:
    Dog(string name, int age) {
        setName(name);
        setAge(age);
    }

    // Function to set the dog's name
    void setName(string name) {
        if (!name.empty()) {
            dogName = name; // store the dog's name
        }
        else {
            cout << "�m�W���o����!" << endl;
        }
    }

    // Function to get the dog's name
    string getName() const {
        return dogName; // return the dog's name
    }

    // Function to set the dog's age
    void setAge(int age) {
        if (age >= 0 && age <= 20) {
            dogAge = age; // store the dog's age
        }
        else {
            cout << "�~�ֶ�����0-20��!" << endl;
           
        }
    }

    // Function to get the dog's age
    int getAge() const {
        return dogAge; // return the dog's age
    }

    // Function to display a message with the dog's name and age
    void displayMessage() const {
        if (dogAge >= 0 && dogAge <= 20) {
            cout << "�����m�W: " << getName() << "\n�����~��: " << getAge() << " ��." << endl;
        }
        else {
            cout << "�L�Ī��~�֡A�L�k��ܸ�ơC" << endl; // Invalid age, do not display information
        }
    }

private:
    string dogName; // dog's name
    int dogAge;     // dog's age
};

// Main function begins program execution
int main() {
    string nameOfDog;
    int ageOfDog;

    Dog myDog("�p��", 5); // Create a dog with initial name and age

    // Display initial dog information
    cout << "Initial dog information: " << endl;
    myDog.displayMessage();

    cout << "\n�п�J�����W�r: ";
    getline(cin, nameOfDog);
    myDog.setName(nameOfDog);

    cout << "�п�J�����~��:  ";
    cin >> ageOfDog;
    myDog.setAge(ageOfDog);

    cout << endl; // outputs a blank line
    myDog.displayMessage(); // display the updated dog information

    return 0;
} // end main

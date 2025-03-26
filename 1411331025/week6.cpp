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
            cout << "姓名不得為空!" << endl;
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
            cout << "年齡須介於0-20歲!" << endl;
           
        }
    }

    // Function to get the dog's age
    int getAge() const {
        return dogAge; // return the dog's age
    }

    // Function to display a message with the dog's name and age
    void displayMessage() const {
        if (dogAge >= 0 && dogAge <= 20) {
            cout << "狗的姓名: " << getName() << "\n狗的年齡: " << getAge() << " 歲." << endl;
        }
        else {
            cout << "無效的年齡，無法顯示資料。" << endl; // Invalid age, do not display information
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

    Dog myDog("小黑", 5); // Create a dog with initial name and age

    // Display initial dog information
    cout << "Initial dog information: " << endl;
    myDog.displayMessage();

    cout << "\n請輸入狗的名字: ";
    getline(cin, nameOfDog);
    myDog.setName(nameOfDog);

    cout << "請輸入狗的年齡:  ";
    cin >> ageOfDog;
    myDog.setAge(ageOfDog);

    cout << endl; // outputs a blank line
    myDog.displayMessage(); // display the updated dog information

    return 0;
} // end main

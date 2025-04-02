#include <iostream>
#include <string> // program uses C++ standard string class
#include"DOG.h"
using namespace std;

// GradeBook class definition
int main()
{
    string nameOfDog; //string是庫存類別  string of characters to store the course name
    int age;
    DOG myDog1("...", 0); // create a GradeBook 是使用者自訂類別 object named myGradeBook
    // display initial value of courseName
    cout << "Initial the dog's name is: " << myDog1.getDogName() << endl;
    cout << "\nInitial the dog's age is:" << myDog1.getDogAge() << endl;

    // prompt for, input and set course name
    cout << "\nPlease enter the dog's name:" << endl;
    getline(cin, nameOfDog); // read a course name with 
    cout << "\nPlease enter the dog's age:" << endl;
    cin >> age;
    myDog1.setDogName_and_Age(nameOfDog, age); // set the course name
    cout << endl; // outputs a blank line
} // end main
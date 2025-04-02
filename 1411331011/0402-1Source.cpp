#include <iostream>
#include <string> // program uses C++ standard string class
#include "dog.h"
using namespace std;


int main()
{
    string nameOfDog; //string是庫存類別  string of characters to store the course name
    DOG myDog1("Lucky", 12); // create a DOG 是使用者自訂類別 object named myGradeBook
    int age = 12;
    // display initial value of courseName
    cout << "Initial dog name is: %s \n" << myDog1.getDogName() << endl;
    cout << "Initial dog age is: %d \n" << myDog1.getDogAge() << endl;

    // prompt for, input and set course name
    cout << "\nPlease enter the dog name:" << endl;
    getline(cin, nameOfDog); // read a course name with blanks
    cout << "\nPlease enter the dog age:" << endl;
    cin >> age; // read a course name with blanks
    myDog1.setDogName_and_Age(nameOfDog, age); // set the course name

    cout << endl; // outputs a blank line
    myDog1.displayMessage(); // display message with new course name
} // end main

#include <iostream>
#include <string> // program uses C++ standard string class
using namespace std;

// GradeBook class definition
class DOG
{
public:
    explicit  DOG(string name,int age)
    {
        DogName = name;
        DogAge = age;
    }
    // function that sets the course name
    void setDogName_and_Age(string name,int age)
    {
        if (age < 20)
        {
            DogName = name;
            DogAge = age;
        }
        else
        {
            cout << "too old!" << endl;
        }
    } // end function setCourseName

    // function that gets the course name
    string getDogName() const
    {
        return DogName; // return the object's courseName
    } // end function getCourseName

    int getDogAge() const
    {
        return DogAge;
    }

    // function that displays a welcome message
    void displayMessage() const
    {
        // this statement calls getCourseName to get the 
        // name of the course this GradeBook represents
        cout << "This dog's name is \n" << getDogName() << "!" << endl;
        cout << "This dog's age is \n" << getDogAge() << "!" << endl;
    } // end function displayMessage
private:
    string DogName; // course name for this GradeBook
    int DogAge;
}; // end class GradeBook  

// function main begins program execution
int main()
{
    string nameOfDog; //string是庫存類別  string of characters to store the course name
    int age;
    DOG myDog1("...",0); // create a GradeBook 是使用者自訂類別 object named myGradeBook
    // display initial value of courseName
    cout << "Initial the dog's name is: " << myDog1.getDogName()<< endl;
    cout << "\nInitial the dog's age is:" << myDog1.getDogAge() << endl;

    // prompt for, input and set course name
    cout << "\nPlease enter the dog's name:" << endl;
    getline(cin, nameOfDog); // read a course name with 
    cout << "\nPlease enter the dog's age:" << endl;
    cin >> age;
    myDog1.setDogName_and_Age(nameOfDog, age); // set the course name
    cout << endl; // outputs a blank line
} // end main
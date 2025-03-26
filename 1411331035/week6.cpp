#include <iostream>
#include <string> // program uses C++ standard string class
using namespace std;

// PetDog class definition
class PetDog
{
public:
    // constructor with parameters to initialize dog's name and age
    explicit PetDog(string dogName, int dogAge)  
    {
        setName(dogName);  
        setAge(dogAge);    
    }

    // function to set the dog's name
    void setName(string dogName)
    {
        name = dogName;
    }

    // function to get the dog's name
    string getName() const
    {
        return name;
    }

    // function to set the dog's age
    void setAge(int dogAge)
    {
        if (dogAge < 20 && dogAge >= 0)  
            age = dogAge;
        else
            cout << "Invalid age! Age must be between 0 and 19." << endl;
    }

    // function to get the dog's age
    int getAge() const
    {
        return age;
    }

    // function to display the dog's information
    void newdisplayDogInfo() const
    {
        cout << "new dog's name is: " << getName() << endl;
        cout << "new dog's age is: " << getAge() << " years old." << endl;
    }
    void displayDogInfo() const
    {
        cout << "origin dog's name is: " << getName() << endl;
        cout << "origin dog's age is: " << getAge() << " years old." << endl;
    }

private:
    string name;  // dog's name
    int age;      // dog's age
}; // end class PetDog  

// function main begins program execution
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

#include <iostream>
#include <string> 
using namespace std;

class Dog
{
public:
    //explicit  Dog(string name,int age)
    //{
    //    DogName = name;
    //    DogAge = age;
    //}

    void setDogName_and_Age(string name, int age)
    {
        if (age <20){
            DogName = name;
            DogAge = age;
        }
        else {
            cout << "Invalid data" << endl;
        }  
    }

    string getDogName() const
    {
        return DogName; 
    } 

    int getDogAge() const
    {
        return DogAge;
    }

    void displayMessage() const
    {
        cout << "This is my dog's name:"<< getDogName() <<"\nand now age is:"<<getDogAge()<< "!" << endl;
    }
private:
    string DogName="Unknow";
    int DogAge=0;
};

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
    myDog.setDogName_and_Age(nameOfDog,age);
    cout << endl;
    myDog.displayMessage();
}



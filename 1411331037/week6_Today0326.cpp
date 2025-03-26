#include <iostream>
#include <string> // program uses C++ standard string class
using namespace std;

// GradeBook class definition
class DOG
{
public:
    explicit DOG(string name, int age)
        : DogName(name), DogAge(age)
    {}

    void setDog(string name,int age)
    {
        if (age<20) {
            DogName = name;
            DogAge = age;
        }
            
        else
            cout << "年齡不可超出20歲"<< endl;

    }

    
    string getDogName() 
    {
        return DogName;
 
    } 
    int getDogAge() 
    {
        return DogAge;
    }
   
    void displayMessage() 
    {
        cout << "\n狗的名字叫" << getDogName() <<"，年齡為 "<< getDogAge() << "歲!" << endl;
    } 
private:
    string DogName;
    int DogAge;
}; 


int main()
{
    string nameOfDog;
    int Age;
    DOG dog("SAMPO",10);
    dog.displayMessage();
    cout << "\n請輸入狗的名字:";
    getline(cin, nameOfDog);
    cout << "\n請輸入狗的年齡:" ;
    cin >> Age;
    dog.setDog(nameOfDog, Age);
    dog.displayMessage();
}
    



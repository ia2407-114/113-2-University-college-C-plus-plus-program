#include <iostream>
#include <string> // program uses C++ standard string class
#include "DOG.h"
using namespace std;

int main()
{
    string nameOfDog;
    int Age;
    DOG dog("SAMPO", 10);
    dog.displayMessage();
    cout << "\n請輸入狗的名字:";
    getline(cin, nameOfDog);
    cout << "\n請輸入狗的年齡:";
    cin >> Age;
    dog.setDog(nameOfDog, Age);
    dog.displayMessage();
}
